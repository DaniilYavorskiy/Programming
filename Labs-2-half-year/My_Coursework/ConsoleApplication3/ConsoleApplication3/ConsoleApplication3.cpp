#include <SFML/Graphics.hpp>
#include <iostream>
#include <time.h>
#include <string>

const int field_height = 25;
// высота игрового поля
const int field_width = 15;
// ширина игрового поля

int field[field_height][field_width]{ }; // игровое поле

// Массив фигурок-тетрамино
int figures[7][4] =
{
	1,3,5,7, // I
	2,4,5,7, // S
	3,5,4,6, // Z
	3,5,4,7, // T
	2,3,5,7, // L
	3,5,7,6, // J
	2,3,4,5, // O
};

int checkLine(int& userPoints)
{
	//----ПРОВЕРКА ЛИНИИ----//
	int k = field_height - 1;    // строка k - самая нижняя
	for (int i = field_height - 1; i > 0; i--)
		// i пробегает все строки снизу вверх.
		// в начале k и i совпадают
	{
		int count = 0;
		for (int j = 0; j < field_width; j++)
		{
			if (field[i][j])
			{
				count++;
			}
			field[k][j] = field[i][j];
		}

		if (count < field_width)
		{
			k--;
		}

		else
		{
			userPoints += 10; //сколько очков даётся за каждую линию
		}

		// k уменьшится только если линия не занята полностью
		// если линия занята полностью, то следующее i
		// уже соответствует более высокой строке
		// а k всё ещё на полной строке
		// строка k будет перезаписана следующей строкой i
	}
	return userPoints;
}

int Level
	{
		Level = 1
	};

class Tetramino
{
public:
	int color{ };
	int type{ };
	int blockPositions[4]{ };

	struct Coordinates
	{
		int x;
		int y;
	};

	Coordinates coordinates[4]{ };

	int figures[7][4] =
	{
		1,3,5,7, // I
		2,4,5,7, // S
		3,5,4,6, // Z
		3,5,4,7, // T
		2,3,5,7, // L
		3,5,7,6, // J
		2,3,4,5, // O
	};

	void create()
	{
		std::cout << "\n Show what you are capable!!" << std::endl;
		color = 1 + rand() % 7;
		type = rand() % 7;
		for (int i = 0; i < 4; i++)
		{
			blockPositions[i] = figures[type][i];
		}
		for (int i = 0; i < 4; i++)
		{
			coordinates[i].x = blockPositions[i] % 2 + 7;
			// сдвигаем стартовую позицию ближе к центру с помощью + 7
			coordinates[i].y = blockPositions[i] / 2;
		}
	};

	void draw(sf::RenderWindow& thatWindow,
		sf::Sprite& thatSprite,
		int marginLeft,
		int marginTop)
	{
		// Рисуем тетрамино из класса Tetramino
		for (int i = 0; i < 4; i++)
		{
			// Разукрашиваем тетрамино
			thatSprite.setTextureRect(sf::IntRect(color * 18, 0, 18, 18));

			// Устанавливаем позицию каждого кусочка тетрамино
			thatSprite.setPosition(coordinates[i].x * 18, coordinates[i].y * 18);
			thatSprite.move(marginLeft, marginTop); // смещение

			// Отрисовка спрайта
			thatWindow.draw(thatSprite);
		}
	};

	bool check()
	{
		for (int i = 0; i < 4; i++)
		{
			if (coordinates[i].x < 0 || coordinates[i].x >= field_width || coordinates[i].y >= field_height)
			{
				std::cout << std::endl << "field X" << coordinates[i].x << "Y " << coordinates[i].y << "is out of board" << std::endl;
				return false;
			}
			else if (field[coordinates[i].y][coordinates[i].x])
			{
				std::cout << std::endl << "field X" << coordinates[i].x << "Y " << coordinates[i].y << "is occupied" << std::endl;
				return false;
			}

		}
		return true;
	}

	void moveDown(sf::RenderWindow& thatWindow)
	{
		int x[4]{};
		int y[4]{};

		for (int i = 0; i < 4; i++)
		{
			y[i] = coordinates[i].y;
			x[i] = coordinates[i].x;
		}

		for (int i = 0; i < 4; i++)
		{
			coordinates[i].y += 1;
		}

		if (check() == false)
		{
			std::cout << "stop here" << std::endl;
			for (int i = 0; i < 4; i++)
			{
				coordinates[i].y = y[i];
				std::cout << "coloring the field" << std::endl;
				field[y[i]][x[i]] = color;
			}
			create();
			if (check() == false)
			{
				std::cout << "GAME OVER!!" << std::endl;
				thatWindow.close();
			}
		}
	}

	void moveHoriz(sf::RenderWindow& thatWindow, int direction)
	{
		int x[4]{};
		int y[4]{};

		for (int i = 0; i < 4; i++)
		{
			y[i] = coordinates[i].y;
			x[i] = coordinates[i].x;
		}

		for (int i = 0; i < 4; i++)
		{
			coordinates[i].x += direction;
		}

		if (check() == false)
		{
			for (int i = 0; i < 4; i++)
			{
				coordinates[i].x = x[i];
			}
		}
	}

	void rotate()
	{
		int x[4]{};
		int y[4]{};
		for (int i = 0; i < 4; i++)
		{
			y[i] = coordinates[i].y;
			x[i] = coordinates[i].x;
		}

		int originX = coordinates[1].x; // указываем X центра вращения
		int originY = coordinates[1].y;	// указываем Y центра вращения


		for (int i = 0; i < 4; i++)
		{

			int dy = coordinates[i].y - originY; // y - y0
			int dx = coordinates[i].x - originX; // x - x0
			coordinates[i].x = originX - dy; // x_2 = x_0 - dy
			coordinates[i].y = originY + dx; // y_2 = y_0 + dx
		}
		if (check() == false)
		{
			for (int i = 0; i < 4; i++)
			{
				coordinates[i].x = x[i];
			}
		}
	}
};

int main()
{
	int window_width {460};
	int window_height {600};
	int userPoints {0};

	Tetramino tetramino;
	tetramino.create();
	sf::RenderWindow window(sf::VideoMode(window_width, window_height), "Yavorskiy_Tetris!");

	// Создание и загрузка текстуры
	sf::Texture texture;
	texture.loadFromFile("images/tiles.png");

	// Создание спрайта
	sf::Sprite sprite(texture);

	// Вырезаем из спрайта отдельный квадратик размером 18х18 пикселей
	sprite.setTextureRect(sf::IntRect(0, 0, 18, 18));

	// Переменные для таймера и задержки
	float timer = 0;
	float delay = 0.05;

	// Часы (таймер)
	sf::Clock clock;

	// Главный цикл приложения: выполняется, пока открыто окно
	while (window.isOpen())
	{
		// Получаем время, прошедшее с начала отсчёта, и конвертируем его в секунды
		float time = clock.getElapsedTime().asSeconds();
		clock.restart();
		timer += time;

		// Обрабатываем события в цикле
		sf::Event event;
		while (window.pollEvent(event))
		{
			// Пользователь нажал на «крестик» и хочет закрыть окно?
			if (event.type == sf::Event::Closed)
				// тогда закрываем его
				window.close();

			// Была ли нажата клавиша на клавиатуре?
			if (event.type == sf::Event::KeyPressed)
			{
				// Эта кнопка – стрелка влево
				if (event.key.code == sf::Keyboard::Left)
				{
					tetramino.moveHoriz(window, -1);
				}
				// Эта кнопка – стрелка вправо
				else if (event.key.code == sf::Keyboard::Right)
				{
					tetramino.moveHoriz(window, 1);
				}
				// Эта кнопка – стрелка вверх
				else if (event.key.code == sf::Keyboard::Up)
				{
					tetramino.rotate();
				}
			}

			// Нажали на кнопку "Вниз" ? Ускоряем падение тетрамино
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) delay = 0.1;
		}

		// Движение тетрамино вниз («тик» таймера)

		if (timer > delay)
		{
			tetramino.moveDown(window);
			timer = 0;
		}

		checkLine(userPoints);

		//пять уровней сложности
		Level = 1; delay = 0.8; //(минимальная) 1-ый уровень скорости падения фигуры

		if (userPoints > 20)
		{
			Level = 2;
			delay = 0.6;  //2-ой уровень скорости падения фигуры
		}

		if (userPoints > 50)
		{
			Level = 3;
			delay = 0.4;  //3-ий уровень скорости падения фигуры
		}

		if (userPoints > 80)
		{
			Level = 4;
			delay = 0.2;  //4-ый уровень скорости падения фигуры
		}

		if (userPoints > 120)
		{
			Level = 5;
			delay = 0.05;  //(максимальная) 5-ый уровень скорости падения фигуры
		}

		//----ОТРИСОВКА----//
		// цвет фона - голубой
		window.clear(sf::Color::Cyan);

		// Отрисовкна фона
		int tetrisFeildTop{ 80 };
		int tetrisFeildLeft{ 100 };

		for (int varHeight = 0; varHeight < field_height; varHeight++)
		{
			for (int j = 0; j < field_width; j++)
			{
				if (field[varHeight][j] == 0)
				{
					sprite.setTextureRect(sf::IntRect(8 * 18, 0, 18, 18));
					sprite.setPosition(tetrisFeildLeft + j * 18, tetrisFeildTop + varHeight * 18);
				}
				else
				{
					sprite.setTextureRect(sf::IntRect(field[varHeight][j] * 18, 0, 18, 18));
					// значение каждого поля field[varHeight][j] это цвет, его мы используем для выбора цветного квадратика из спрайта
				}
				sprite.setPosition(tetrisFeildLeft + j * 18, tetrisFeildTop + varHeight * 18);
				window.draw(sprite);
			}
		}

		// Рисуем тетрамино с помощью метода draw из класса Tetramino
		tetramino.draw(window, sprite, tetrisFeildLeft, tetrisFeildTop);

		//надпись Score
		sf::Font font;
		font.loadFromFile("Font/Samson.ttf");
	
		sf::Text text;

		// выбор шрифта
		text.setFont(font); // шрифт - sf::Font

		std::string userPointsString = "Score: " + std::to_string(userPoints);

		// установка строки для отображения
		text.setString(userPointsString);

		// установка размера символов
		text.setCharacterSize(35); // в пикселях

		// установка цвета символов
		text.setFillColor(sf::Color::Red);

		// установка стиля текста и расположения
		text.setStyle(sf::Text::Bold | sf::Text::Underlined);
		text.setPosition(175.f, 10.f);

		window.draw(text);

		//надпись Level
		sf::Font font1;
		font1.loadFromFile("Font/News 705 Italic BT.ttf");

		sf::Text text1;

		// выбор шрифта
		text1.setFont(font1); // шрифт - sf::Font


		std::string LevelString = "Level: " + std::to_string(Level);

		// установка строки для отображения
		text1.setString(LevelString);

		// установка размера символов
		text1.setCharacterSize(25); // в пикселях

		// установка цвета символов
		text1.setFillColor(sf::Color::Magenta);

		// установка стиля текста и расположения
		text1.setStyle(sf::Text::Bold);
		text1.setPosition(180.f, 550.f);

		window.draw(text1);

		// Отрисовка окна
		window.display();
	}

	return 0;
}
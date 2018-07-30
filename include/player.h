#ifndef PLAYER
#define PLAYER

class Player{
private:
	int speed_points;
	int health_points;
	int attack_points;
	int defense_points;
public:
	//constructor
	Player(int health=5, int attack=5, int defense=5, int speed=5);

	//getters & setters
	void set_speed(int);
	void set_health(int);
	void set_attack(int);
	void set_defense(int);

	int get_speed();
	int get_health();
	int get_attack();
	int get_defense();

	void take_damage(int);
	void attack(Player*);
	bool is_dead();
};
#endif
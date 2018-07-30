#include "player.h"
#include <iostream>

Player::Player(int health, int attack, int defense, int speed){
	health_points = health;
	attack_points = attack;
	defense_points = defense;
	speed_points =  speed;
}

void Player::take_damage(int damage){
	health_points -= damage;
}

void Player::attack(Player* p){
	int damage = attack_points - p->get_defense();
	if (damage<0){
		damage = 0;
		std::cout<<p->get_name()<<"'s defense is too strong! It barely feels "<<m_name<<" 's attack"<<std::endl;
	}
	p->take_damage(damage);
	std::cout << m_name<< " dealt "<< damage << " damage to " <<p->get_name() <<std::endl;
}

bool Player::is_dead(){
	return(health_points<=0);
}

void Player::set_name(std::string name){m_name = name;}

void Player::set_health(int health){health_points=health;}
void Player::set_attack(int attack){attack_points=attack;}
void Player::set_defense(int defense){defense_points=defense;}
void Player::set_speed(int speed){speed_points=speed;}

std::string Player::get_name(){return m_name;}

int Player::get_health(){return health_points;}
int Player::get_attack(){return attack_points;}
int Player::get_defense(){return defense_points;}
int Player::get_speed(){return speed_points;}
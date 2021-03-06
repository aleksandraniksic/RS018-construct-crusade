#ifndef _DINO_ENEMY_CLASS_HPP
#define _DINO_ENEMY_CLASS_HPP

#include "RealEnemyClass.hpp"

class DinoEnemyClass : public RealEnemyClass{
public:
    DinoEnemyClass(Sprite sprite, Sprite stone_sprite, Sprite gold_sprite, double x_pos, double y_pos, int plat_left, int plat_right)
     : RealEnemyClass(sprite, gold_sprite, x_pos, y_pos, plat_left, plat_right), stone_sprite_(stone_sprite){

        first_hit_stoning_ = true;
        phase_delta_ = 1000;
     }

    bool first_hit_stoning_;
    Sprite stone_sprite_;

};
#endif // _DINO_ENEMY_CLASS_HPP

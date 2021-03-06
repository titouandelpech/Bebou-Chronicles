/*
** EPITECH PROJECT, 2020
** delete_game.c
** File description:
** delete game
*/

#include "game.h"

static void delete_map(map_t map)
{
    delete_sprite(map->sprite);
}

void delete_game(game_t *game)
{
    delete_map(game->map);
    delete_player(game->player);
    delete_camera(game->camera);
    sfClock_destroy(game->clock_loop);
}
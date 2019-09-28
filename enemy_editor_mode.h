#ifndef IGEEK_RPG_TOOLKIT_ENEMYEDITORMODE
#define IGEEK_RPG_TOOLKIT_ENEMYEDITORMODE

#include "enemy_spawner_tile.h"
#include "modeeditor.h"

class State;
class StateData;
class EditorMode;
class TileMap;
class Tile;
class EnemySpawner;

class EnemyEditorMode : public EditorMode {
 private:
  sf::Text cursor_text_;
  sf::RectangleShape sidebar_;
  sf::RectangleShape selector_rect_;
  sf::IntRect texture_rect_;

  int type_;
  int amount_;
  int time_to_spawn_;
  float distance_max_;

  void InitVariables();
  void initGui();

 public:
  EnemyEditorMode(StateData* state_data, TileMap* tile_map,
                  EditorStateData* editor_state_data);
  virtual ~EnemyEditorMode();

  // Functions
  void updateInput(const float& dt);
  void updateGui(const float& dt);
  void Update(const float& dt);

  void renderGui(sf::RenderTarget& target);
  void Render(sf::RenderTarget& target);
};

#endif  //! ENEMYEDITORMODE_H

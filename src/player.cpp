/* Player
 * ===========================================================================
 *
 */
 //---------------------------- include section -------------------------------
#include "Player.h"
#include "Map.h"
#include "Location.h"
//------------------------------ gets section --------------------------------
/*----------------------------------------------------------------------------
 * The get method
 * input:
 * output: .
*/
Location Player::getLocation() const { return this->m_location; };
//---------------------------- methods section -------------------------------
/*----------------------------------------------------------------------------
 * The method
 * input: .
 * output:
*/
void Player::PlayTurn(const Map &map){
	Location newLocation = this->m_location;
	while (this->m_location == newLocation)
		newLocation = 
		map.isMovePossible(this->m_location, Keyboard::getch());
}
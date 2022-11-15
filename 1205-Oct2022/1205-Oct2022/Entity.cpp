#include "Entity.h"

Entity::Entity() {
	m_id = 0;
}

Entity::Entity(int id) {
	m_id = id;
}
void Entity::Update()
{
}

int Entity::GetId()
{
	return m_id;
}

void Entity::SetId(int id)
{
	m_id = id;
}
#pragma once

/// <summary>
/// Entity class is the parent of all objects in our game
/// </summary>
class Entity
{
private:
	int m_id;

public:
	Entity();
	Entity(int id);
	int GetId();
	void SetId(int id);

	// a Pure virtual method which makes the class an abstract class
	// an abstract class cannot be instantiated
	virtual void Update() = 0;
};
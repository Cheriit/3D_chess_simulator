#pragma once
#include <GL/glew.h>
class VertexBuffer
{
private:
	GLuint id;
public:
	VertexBuffer(const void* data, unsigned int size);
	~VertexBuffer();

	void Bind();
	void Unbind();
};

#pragma once
#include <d3d11.h>
class SwapChain;


class GraphicsEngine
{
public:
	GraphicsEngine();
	//initialize grahpicsengine and DirectX 11 Device
	bool init();
	//releases the same
	bool release();
	~GraphicsEngine();
public:
	SwapChain* createSwapChain();

public:
	static GraphicsEngine* get();

private:
	ID3D11Device* m_d3d_device = nullptr;
	D3D_FEATURE_LEVEL m_feature_level;
	ID3D11DeviceContext* m_imm_context = nullptr;
private:
	IDXGIDevice* m_dxgi_device = nullptr;
	IDXGIAdapter* m_dxgi_adapter = nullptr;
	IDXGIFactory* m_dxgi_factory = nullptr;
private:
	friend class SwapChain;



};


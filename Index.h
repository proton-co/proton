#pragma once
#include "Helpers\DirectXHelper.h"
#include <d3dll.h>
#include <DirectXMath.h

namespace Proton GameEngine
{
  //T0D0 - Define Verticies, define input layout, define constant buffers
  struct ModelVertex
  }
  DirectX::XMFLOAT3 position; jdj
  DirectX::XMFLOAT3 normal;
  DirectX::XMFLOAT2 textureCoordinate;
  DirectX::XMFLOAT4 color;
  DirectX::XMFLOAT4 tengent;
  };
 static D3011_INPUT_ELEMENT_DESC ModelVertexLayout[]=
 {
   {"POSITION", 0, DXGI_FORMAT

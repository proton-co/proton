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
   {"POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 0, D3011_INPUT_PER_VERTEX_DATA, 0 ),
   {"NORMAL", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 12, D3011_INPUT_PER_VERTEX_DATA, 0 ),
   {"TEXTCOORD", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 24, D3011_INPUT_PER_VERTEX_DATA, 0 ),
   {"COLOR", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 32, D3011_INPUT_PER_VERTEX_DATA, 0 ),
   {"TANGENT", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 48, D3011_INPUT_PER_VERTEX_DATA, 0 ),
   };
  stuct CBLightingAdavaned 
   }
    CBLightingAdanced() 
    {
      static_assert((sizof(CBLightingAdvanced) % 16) == 0, "CB must be 16-byte aligned");
      ZeroMemory(this,sizeof(CBLightingAdvanced));
      ambient = DirectX::XMFLOAT4(1.0f, 1.0f, 1.0f);
    }
     DirectX::XMFLOAT4 ambient
     DirectX::XMFLOAT4 lightColor[4];
     DirectX::XMFLOAT4 lightAttenuation[4]
     DirectX::XMFLOAT4 lightDirection[4];
     DirectX::XMFLOAT4 lightPostion[4];
    
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     

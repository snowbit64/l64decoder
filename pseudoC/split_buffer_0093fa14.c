// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 0093fa14
// Size: 124 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<TerrainLayerTransformGroupDesc::DistanceTextureDesc,std::__ndk1::allocator<TerrainLayerTransformGroupDesc::DistanceTextureDesc>&> * this)


/* std::__ndk1::__split_buffer<TerrainLayerTransformGroupDesc::DistanceTextureDesc,
   std::__ndk1::allocator<TerrainLayerTransformGroupDesc::DistanceTextureDesc>&>::~__split_buffer()
    */

void __thiscall
std::__ndk1::
__split_buffer<TerrainLayerTransformGroupDesc::DistanceTextureDesc,std::__ndk1::allocator<TerrainLayerTransformGroupDesc::DistanceTextureDesc>&>
::~__split_buffer(__split_buffer<TerrainLayerTransformGroupDesc::DistanceTextureDesc,std::__ndk1::allocator<TerrainLayerTransformGroupDesc::DistanceTextureDesc>&>
                  *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(this + 0x10);
  while (lVar2 != lVar1) {
    *(byte **)(this + 0x10) = (byte *)(lVar2 + -0x38);
    if ((*(byte *)(lVar2 + -0x20) & 1) != 0) {
      operator_delete(*(void **)(lVar2 + -0x10));
    }
    if ((*(byte *)(lVar2 + -0x38) & 1) != 0) {
      operator_delete(*(void **)(lVar2 + -0x28));
    }
    lVar2 = *(long *)(this + 0x10);
  }
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    return;
  }
  return;
}



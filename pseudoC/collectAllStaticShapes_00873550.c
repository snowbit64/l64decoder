// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: collectAllStaticShapes
// Entry Point: 00873550
// Size: 304 bytes
// Signature: undefined __cdecl collectAllStaticShapes(RawTransformGroup * param_1, uint param_2, char * param_3, uint param_4, float param_5, vector * param_6, vector * param_7)


/* NavigationMeshGeneratorUtil::collectAllStaticShapes(RawTransformGroup*, unsigned int, char
   const*, unsigned int, float, std::__ndk1::vector<float, std::__ndk1::allocator<float> >&,
   std::__ndk1::vector<unsigned int, std::__ndk1::allocator<unsigned int> >&) */

void NavigationMeshGeneratorUtil::collectAllStaticShapes
               (RawTransformGroup *param_1,uint param_2,char *param_3,uint param_4,float param_5,
               vector *param_6,vector *param_7)

{
  IndexedTriangleSet *pIVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if (((uint)*(undefined8 *)(param_1 + 0x10) >> 0xb & 1) == 0) {
    if ((0.0 < param_5) && (((uint)*(undefined8 *)(param_1 + 0x10) >> 7 & 1) != 0)) {
      RawTransformGroup::updateWorldTransformation();
      addTerrain((Matrix4x4 *)(param_1 + 0xb8),(GeoMipMappingTerrain *)(param_1 + 0x170),param_3,
                 param_4,param_5,param_6,param_7);
    }
  }
  else if ((((*(uint *)(param_1 + 400) & param_2 << 0xe & 0x3fc000) != 0) &&
           (*(long *)(param_1 + 0x170) != 0)) &&
          (pIVar1 = (IndexedTriangleSet *)Geometry::getCollisionProxyMesh(),
          pIVar1 != (IndexedTriangleSet *)0x0)) {
    RawTransformGroup::updateWorldTransformation();
    addIndexedTriangleSet((Matrix4x4 *)(param_1 + 0xb8),pIVar1,param_6,param_7);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  uVar3 = *(long *)(param_1 + 0x30) - lVar2;
  if ((int)(uVar3 >> 3) != 0) {
    lVar4 = 0;
    while( true ) {
      if (((byte)(*(RawTransformGroup **)(lVar2 + lVar4))[0x10] >> 4 & 1) != 0) {
        collectAllStaticShapes
                  (*(RawTransformGroup **)(lVar2 + lVar4),param_2,param_3,param_4,param_5,param_6,
                   param_7);
      }
      if ((uVar3 >> 3 & 0xffffffff) * 8 + -8 == lVar4) break;
      lVar2 = *(long *)(param_1 + 0x28);
      lVar4 = lVar4 + 8;
    }
  }
  return;
}



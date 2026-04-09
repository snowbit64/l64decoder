// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DestructionGeometry
// Entry Point: 00926cb4
// Size: 316 bytes
// Signature: undefined __thiscall DestructionGeometry(DestructionGeometry * this, char * param_1, DestructionGeometryShared * param_2)


/* DestructionGeometry::DestructionGeometry(char const*, DestructionGeometryShared*) */

void __thiscall
DestructionGeometry::DestructionGeometry
          (DestructionGeometry *this,char *param_1,DestructionGeometryShared *param_2)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  IndexedTriangleSet *pIVar4;
  long lVar5;
  undefined8 *puVar6;
  
  DynamicGeometry::DynamicGeometry((DynamicGeometry *)this,param_1,false);
  uVar3 = *(ulong *)(this + 0x30) & 0xffffffe3ffffffe3;
  *(DestructionGeometryShared **)(this + 0x70) = param_2;
  *(undefined ***)this = &PTR__DestructionGeometry_00fdff28;
  *(undefined ***)(this + 0x10) = &PTR__DestructionGeometry_00fdff78;
  *(ulong *)(this + 0x30) = CONCAT44((int)(uVar3 >> 0x20),(int)*(ulong *)(this + 0x30)) | 0x80;
  FUN_00f276d0(uVar3,1,param_2 + 8);
                    /* try { // try from 00926d14 to 00926dd7 has its CatchHandler @ 00926df0 */
  uVar1 = DestructionGeometryShared::getNumChunks();
  pvVar2 = operator_new__((ulong)uVar1 * 0x94);
  if (uVar1 != 0) {
    lVar5 = (ulong)uVar1 * 0x94;
    puVar6 = (undefined8 *)((long)pvVar2 + 0x50);
    do {
      puVar6[-7] = 0;
      puVar6[-8] = 0x3f800000;
      puVar6[-5] = 0;
      puVar6[-6] = 0x3f80000000000000;
      lVar5 = lVar5 + -0x94;
      puVar6[-3] = 0x3f800000;
      puVar6[-4] = 0;
      puVar6[-1] = 0x3f80000000000000;
      puVar6[-2] = 0;
      puVar6[1] = 0;
      *puVar6 = 0x3f800000;
      puVar6[3] = 0;
      puVar6[2] = 0x3f80000000000000;
      puVar6[5] = 0x3f800000;
      puVar6[4] = 0;
      puVar6[7] = 0x3f80000000000000;
      puVar6[6] = 0;
      puVar6[-10] = 0;
      puVar6[-9] = 0;
      *(undefined *)(puVar6 + 8) = 0;
      puVar6 = (undefined8 *)((long)puVar6 + 0x94);
    } while (lVar5 != 0);
  }
  *(void **)(this + 0xd8) = pvVar2;
  uVar3 = DestructionGeometryShared::getNumChunks();
  pvVar2 = operator_new__((uVar3 & 0xffffffff) << 6);
  *(void **)(this + 0xe0) = pvVar2;
  this[0x98] = (DestructionGeometry)0x0;
  this[0x78] = (DestructionGeometry)0x0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined2 *)(this + 0xd0) = 0;
  reset();
  pIVar4 = (IndexedTriangleSet *)DestructionGeometryShared::getMesh();
  Geometry::setCollisionProxyMesh((Geometry *)this,pIVar4);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_2 + 0x20);
  return;
}



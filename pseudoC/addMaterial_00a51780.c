// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addMaterial
// Entry Point: 00a51780
// Size: 236 bytes
// Signature: undefined __thiscall addMaterial(GsShape * this, GsMaterial * param_1)


/* GsShape::addMaterial(GsMaterial*) */

void __thiscall GsShape::addMaterial(GsShape *this,GsMaterial *param_1)

{
  GsMaterial GVar1;
  ushort uVar2;
  undefined8 *__dest;
  void *__src;
  ulong uVar3;
  
  FUN_00f276d0(1,param_1 + 0x28);
  uVar2 = *(ushort *)(this + 0x196);
  uVar3 = (ulong)uVar2;
  if (uVar3 == 0) {
    *(GsMaterial **)(this + 0x178) = param_1;
  }
  else {
    __dest = (undefined8 *)operator_new__(uVar3 * 8 + 8);
    if (uVar2 == 1) {
      uVar3 = 1;
      *__dest = *(undefined8 *)(this + 0x178);
    }
    else {
      __src = *(void **)(this + 0x178);
      memcpy(__dest,__src,uVar3 * 8);
      if (__src != (void *)0x0) {
        operator_delete__(__src);
        uVar3 = (ulong)*(ushort *)(this + 0x196);
      }
    }
    __dest[uVar3] = param_1;
    *(undefined8 **)(this + 0x178) = __dest;
  }
  GVar1 = param_1[100];
  *(short *)(this + 0x196) = (short)uVar3 + 1;
  if (GVar1 != (GsMaterial)0x0) {
    *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x10000;
  }
  if (0.0 < *(float *)(param_1 + 0x50)) {
    *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x20000;
  }
  uVar3 = GsMaterial::getIsAlphaTested();
  if ((uVar3 & 1) != 0) {
    *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x40000;
  }
  return;
}



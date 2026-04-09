// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLodMaterialAttributes
// Entry Point: 009459d4
// Size: 152 bytes
// Signature: undefined __thiscall getLodMaterialAttributes(GsMaterial * this, uint param_1, RenderPassMaterialAttributes * param_2, MaterialAttributes * param_3)


/* GsMaterial::getLodMaterialAttributes(unsigned int, RenderPassMaterialAttributes const&,
   MaterialAttributes&) const */

undefined8 __thiscall
GsMaterial::getLodMaterialAttributes
          (GsMaterial *this,uint param_1,RenderPassMaterialAttributes *param_2,
          MaterialAttributes *param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x80);
  if (lVar2 == 0) {
    if (param_1 != 0) {
      return 0;
    }
  }
  else {
    if ((uint)((int)((ulong)(*(long *)(lVar2 + 0x30) - *(long *)(lVar2 + 0x28)) >> 3) * 0x38e38e39)
        <= param_1) {
      return 0;
    }
    lVar2 = *(long *)(lVar2 + 0x28) + (ulong)param_1 * 0x48;
    iVar1 = *(int *)(lVar2 + 0x10);
    *(undefined4 *)(param_3 + 0x10) =
         *(undefined4 *)(*(long *)(lVar2 + 8) + (ulong)*(uint *)(this + 0x88) * 4);
    if (iVar1 == 2) {
      *(undefined2 *)param_3 = 0;
      return 1;
    }
    if (iVar1 == 1) {
      if (this[0x9c] == (GsMaterial)0x0) {
        *(undefined2 *)param_3 = 0x100;
        return 1;
      }
      *(undefined2 *)param_3 = 1;
      return 1;
    }
  }
  return 1;
}



// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator<
// Entry Point: 007bc31c
// Size: 148 bytes
// Signature: undefined __thiscall operator<(DensityMapDesc * this, ResourceDesc * param_1)


/* DensityMapDesc::TEMPNAMEPLACEHOLDERVALUE(ResourceDesc const*) const */

bool __thiscall DensityMapDesc::operator<(DensityMapDesc *this,ResourceDesc *param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  
  bVar3 = *(uint *)(param_1 + 0xc) <= *(uint *)(this + 0xc);
  if ((*(uint *)(this + 0xc) == *(uint *)(param_1 + 0xc)) &&
     (bVar3 = *(uint *)(param_1 + 0x10) <= *(uint *)(this + 0x10),
     *(uint *)(this + 0x10) == *(uint *)(param_1 + 0x10))) {
    iVar1 = *(int *)(this + 8);
    if (iVar1 != *(int *)(param_1 + 8)) {
      return iVar1 < *(int *)(param_1 + 8);
    }
    if (iVar1 != 0) {
      return false;
    }
    uVar2 = *(uint *)(this + 0x14);
    bVar3 = *(uint *)(param_1 + 0x14) <= uVar2;
    if (uVar2 == *(uint *)(param_1 + 0x14)) {
      uVar4 = (ulong)(uVar2 - 1);
      if (uVar2 - 1 == 0) {
        return false;
      }
      puVar5 = (uint *)(param_1 + 0x18);
      puVar6 = (uint *)(this + 0x18);
      while (bVar3 = *puVar5 <= *puVar6, *puVar6 == *puVar5) {
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
        uVar4 = uVar4 - 1;
        if (uVar4 == 0) {
          return false;
        }
      }
    }
  }
  return !bVar3;
}



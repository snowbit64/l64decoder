// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCellHeight
// Entry Point: 0098b4e4
// Size: 128 bytes
// Signature: undefined __thiscall getCellHeight(PlayerCenteredCollisionHeightmap * this, float param_1, float param_2, float * param_3)


/* PlayerCenteredCollisionHeightmap::getCellHeight(float, float, float&) const */

bool __thiscall
PlayerCenteredCollisionHeightmap::getCellHeight
          (PlayerCenteredCollisionHeightmap *this,float param_1,float param_2,float *param_3)

{
  float *pfVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  uVar3 = (int)(param_1 / *(float *)(this + 0x10)) - *(int *)(this + 0x1c);
  if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)this)) {
    iVar4 = (int)(param_2 / *(float *)(this + 0x10)) - *(int *)(this + 0x20);
    bVar5 = false;
    if ((-1 < iVar4) && (iVar4 < *(int *)(this + 4))) {
      pfVar1 = (float *)(*(long *)(this + 0x30) + (ulong)uVar3 * 8 +
                        (ulong)(uint)(*(int *)this * iVar4) * 8);
      cVar2 = *(char *)(pfVar1 + 1);
      if (cVar2 != '\0') {
        *param_3 = *pfVar1;
      }
      bVar5 = cVar2 != '\0';
    }
    return bVar5;
  }
  return false;
}



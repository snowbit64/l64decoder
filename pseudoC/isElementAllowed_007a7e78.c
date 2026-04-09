// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isElementAllowed
// Entry Point: 007a7e78
// Size: 236 bytes
// Signature: undefined __thiscall isElementAllowed(EnvironmentSettings * this, VisibilityConditionDesc * param_1)


/* EnvironmentSettings::isElementAllowed(VisibilityConditionDesc const&) const */

undefined8 __thiscall
EnvironmentSettings::isElementAllowed(EnvironmentSettings *this,VisibilityConditionDesc *param_1)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  
  uVar1 = *(uint *)(this + 4);
  if (uVar1 != 0) {
    if ((*(uint *)(param_1 + 8) & (uVar1 ^ 0xffffffff)) != 0) {
      return 0;
    }
    if ((*(uint *)(param_1 + 0xc) & uVar1) != 0) {
      return 0;
    }
  }
  uVar1 = *(uint *)(this + 8);
  if (uVar1 != 0) {
    if ((*(uint *)(param_1 + 0x10) & (uVar1 ^ 0xffffffff)) != 0) {
      return 0;
    }
    if ((*(uint *)(param_1 + 0x14) & uVar1) != 0) {
      return 0;
    }
  }
  sVar4 = *(short *)this;
  if (((0 < sVar4) && (uVar2 = *(ushort *)param_1, uVar2 != 0)) &&
     (uVar3 = *(ushort *)(param_1 + 2), uVar3 != 0)) {
    if (uVar2 < uVar3) {
      if ((int)sVar4 < (int)(uint)uVar2) {
        return 0;
      }
    }
    else if ((int)(uint)uVar2 <= (int)sVar4) goto LAB_007a7f10;
    if ((int)(uint)uVar3 < (int)sVar4) {
      return 0;
    }
  }
LAB_007a7f10:
  sVar4 = *(short *)(this + 2);
  if (((0 < sVar4) && (uVar2 = *(ushort *)(param_1 + 4), uVar2 != 0)) &&
     (uVar3 = *(ushort *)(param_1 + 6), uVar3 != 0)) {
    if (uVar2 < uVar3) {
      if ((int)sVar4 < (int)(uint)uVar2) {
        return 0;
      }
    }
    else if ((int)(uint)uVar2 <= (int)sVar4) {
      return 1;
    }
    if ((int)(uint)uVar3 < (int)sVar4) {
      return 0;
    }
  }
  return 1;
}



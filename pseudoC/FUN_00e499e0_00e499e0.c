// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e499e0
// Entry Point: 00e499e0
// Size: 172 bytes
// Signature: undefined FUN_00e499e0(void)


ulong FUN_00e499e0(ulong param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (*(char *)(param_1 + 0x5c) == '\0') {
    *(undefined4 *)(param_1 + 0x98) = 0;
    if (*(long *)(param_1 + 0x40) == 0) {
      uVar3 = (ulong)(*(uint *)(param_1 + 0x38) + param_2);
      if (((int)param_2 < 0) || (CARRY4(*(uint *)(param_1 + 0x38),param_2) != false)) {
        uVar3 = 0x7fffffff;
        *(undefined4 *)(param_1 + 0x98) = 1;
      }
      uVar2 = fseek(*(FILE **)(param_1 + 0x30),uVar3,0);
      uVar3 = (ulong)uVar2;
      if (uVar2 != 0) {
        *(undefined4 *)(param_1 + 0x98) = 1;
        uVar2 = fseek(*(FILE **)(param_1 + 0x30),(ulong)*(uint *)(param_1 + 0x38),2);
        return (ulong)uVar2;
      }
    }
    else {
      uVar1 = *(long *)(param_1 + 0x48) + (ulong)param_2;
      if (uVar1 < *(ulong *)(param_1 + 0x50)) {
        *(ulong *)(param_1 + 0x40) = uVar1;
      }
      else {
        *(ulong *)(param_1 + 0x40) = *(ulong *)(param_1 + 0x50);
        *(undefined4 *)(param_1 + 0x98) = 1;
      }
    }
  }
  return uVar3;
}



// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Prepare
// Entry Point: 00f89be8
// Size: 200 bytes
// Signature: undefined __cdecl Prepare(float param_1, int param_2)


/* btSoftBody::Joint::Prepare(float, int) */

void btSoftBody::Joint::Prepare(float param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = (ulong)(uint)param_2;
  lVar2 = *(long *)(uVar1 + 0x10);
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0xe0) & 3) == 0)) {
    if ((*(uint *)(lVar2 + 0xec) & 0xfffffffe) != 4) {
      *(undefined4 *)(lVar2 + 0xec) = 1;
    }
    *(undefined4 *)(lVar2 + 0xf0) = 0;
  }
  lVar2 = *(long *)(uVar1 + 0x18);
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0xe0) & 3) == 0)) {
    if ((*(uint *)(lVar2 + 0xec) & 0xfffffffe) != 4) {
      *(undefined4 *)(lVar2 + 0xec) = 1;
    }
    *(undefined4 *)(lVar2 + 0xf0) = 0;
  }
  lVar2 = *(long *)(uVar1 + 0x28);
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0xe0) & 3) == 0)) {
    if ((*(uint *)(lVar2 + 0xec) & 0xfffffffe) != 4) {
      *(undefined4 *)(lVar2 + 0xec) = 1;
    }
    *(undefined4 *)(lVar2 + 0xf0) = 0;
  }
  lVar2 = *(long *)(uVar1 + 0x30);
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0xe0) & 3) == 0)) {
    if ((*(uint *)(lVar2 + 0xec) & 0xfffffffe) != 4) {
      *(undefined4 *)(lVar2 + 0xec) = 1;
    }
    *(undefined4 *)(lVar2 + 0xf0) = 0;
    return;
  }
  return;
}



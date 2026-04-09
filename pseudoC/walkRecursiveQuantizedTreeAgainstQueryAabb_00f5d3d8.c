// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: walkRecursiveQuantizedTreeAgainstQueryAabb
// Entry Point: 00f5d3d8
// Size: 244 bytes
// Signature: undefined __thiscall walkRecursiveQuantizedTreeAgainstQueryAabb(btQuantizedBvh * this, btQuantizedBvhNode * param_1, btNodeOverlapCallback * param_2, ushort * param_3, ushort * param_4)


/* btQuantizedBvh::walkRecursiveQuantizedTreeAgainstQueryAabb(btQuantizedBvhNode const*,
   btNodeOverlapCallback*, unsigned short*, unsigned short*) const */

void __thiscall
btQuantizedBvh::walkRecursiveQuantizedTreeAgainstQueryAabb
          (btQuantizedBvh *this,btQuantizedBvhNode *param_1,btNodeOverlapCallback *param_2,
          ushort *param_3,ushort *param_4)

{
  int *piVar1;
  ushort *puVar2;
  uint uVar3;
  
  while( true ) {
    if (*(ushort *)((long)param_1 + 6) < *param_3) {
      return;
    }
    if (*param_4 < *(ushort *)param_1) {
      return;
    }
    if (*(ushort *)((long)param_1 + 10) < param_3[2]) {
      return;
    }
    if (param_4[2] < *(ushort *)((long)param_1 + 4)) break;
    if (*(ushort *)((long)param_1 + 8) < param_3[1]) {
      return;
    }
    if (param_4[1] < *(ushort *)((long)param_1 + 2)) {
      return;
    }
    uVar3 = *(uint *)((long)param_1 + 0xc);
    if (-1 < (int)uVar3) {
      (**(code **)(*(long *)param_2 + 0x10))(param_2,uVar3 >> 0x15,uVar3 & 0x1fffff);
      return;
    }
    puVar2 = (ushort *)((long)param_1 + 0x10);
    walkRecursiveQuantizedTreeAgainstQueryAabb
              (this,(btQuantizedBvhNode *)puVar2,param_2,param_3,param_4);
    piVar1 = (int *)((long)param_1 + 0x1c);
    param_1 = (btQuantizedBvhNode *)((long)param_1 + 0x20);
    if (*piVar1 < 0) {
      param_1 = (btQuantizedBvhNode *)(puVar2 + (ulong)(uint)-*piVar1 * 8);
    }
  }
  return;
}



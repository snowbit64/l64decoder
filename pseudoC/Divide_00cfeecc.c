// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Divide
// Entry Point: 00cfeecc
// Size: 504 bytes
// Signature: undefined __cdecl Divide(Integer * param_1, Integer * param_2, Integer * param_3, Integer * param_4)


/* CryptoPP::Integer::Divide(CryptoPP::Integer&, CryptoPP::Integer&, CryptoPP::Integer const&,
   CryptoPP::Integer const&) */

void CryptoPP::Integer::Divide(Integer *param_1,Integer *param_2,Integer *param_3,Integer *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **local_a8 [2];
  ulong local_98;
  ulong uStack_90;
  void *local_88;
  undefined4 local_80;
  undefined **local_78 [2];
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  PositiveDivide(param_1,param_2,param_3,param_4);
  if (*(int *)(param_3 + 0x28) == 1) {
    if ((*(int *)(param_2 + 0x28) == 1) || (**(int **)(param_2 + 0x20) != 0)) {
LAB_00cfef28:
      *(int *)(param_2 + 0x28) = 1 - *(int *)(param_2 + 0x28);
    }
    else {
      lVar3 = *(long *)(param_2 + 0x18);
      do {
        if (lVar3 == 0) goto LAB_00cfef34;
        lVar4 = lVar3 + -1;
        lVar2 = lVar3 + -1;
        lVar3 = lVar4;
      } while ((*(int **)(param_2 + 0x20))[lVar2] == 0);
      if ((int)lVar4 != -1) goto LAB_00cfef28;
    }
LAB_00cfef34:
    if ((*(int *)(param_1 + 0x28) != 1) && (**(int **)(param_1 + 0x20) == 0)) {
      lVar3 = *(long *)(param_1 + 0x18);
      do {
        if (lVar3 == 0) goto LAB_00cfeff0;
        lVar4 = lVar3 + -1;
        lVar2 = lVar3 + -1;
        lVar3 = lVar4;
      } while ((*(int **)(param_1 + 0x20))[lVar2] == 0);
      if ((int)lVar4 == -1) goto LAB_00cfeff0;
    }
    operator--(param_2);
    Integer((Integer *)local_a8,param_4);
    local_80 = 0;
                    /* try { // try from 00cfef64 to 00cfef73 has its CatchHandler @ 00cff0dc */
    Minus((Integer *)local_a8);
                    /* try { // try from 00cfef74 to 00cfef7f has its CatchHandler @ 00cff0cc */
    operator=(param_1,(Integer *)local_78);
    if (uStack_60 <= local_68) {
      local_68 = uStack_60;
    }
    local_78[0] = &PTR__Integer_0100c890;
    for (; local_68 != 0; local_68 = local_68 - 1) {
      *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
    }
                    /* try { // try from 00cfefb8 to 00cfefbb has its CatchHandler @ 00cff0c8 */
    UnalignedDeallocate(local_58);
    local_a8[0] = &PTR__Integer_0100c890;
    if (uStack_90 <= local_98) {
      local_98 = uStack_90;
    }
    for (; local_98 != 0; local_98 = local_98 - 1) {
      *(undefined4 *)((long)local_88 + local_98 * 4 + -4) = 0;
    }
                    /* try { // try from 00cfefec to 00cfefef has its CatchHandler @ 00cff0c4 */
    UnalignedDeallocate(local_88);
  }
LAB_00cfeff0:
  if (*(int *)(param_4 + 0x28) == 1) {
    if ((*(int *)(param_2 + 0x28) != 1) && (**(int **)(param_2 + 0x20) == 0)) {
      lVar3 = *(long *)(param_2 + 0x18);
      do {
        if (lVar3 == 0) goto LAB_00cff020;
        lVar4 = lVar3 + -1;
        lVar2 = lVar3 + -1;
        lVar3 = lVar4;
      } while ((*(int **)(param_2 + 0x20))[lVar2] == 0);
      if ((int)lVar4 == -1) goto LAB_00cff020;
    }
    *(int *)(param_2 + 0x28) = 1 - *(int *)(param_2 + 0x28);
  }
LAB_00cff020:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



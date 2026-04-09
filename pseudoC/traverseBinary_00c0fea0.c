// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: traverseBinary
// Entry Point: 00c0fea0
// Size: 464 bytes
// Signature: undefined __cdecl traverseBinary(bool param_1, AST_BinaryNode * param_2, AST_Traverser * param_3)


/* CodeTraverser::traverseBinary(bool, AST_BinaryNode*, AST_Traverser*) */

undefined8
CodeTraverser::traverseBinary(bool param_1,AST_BinaryNode *param_2,AST_Traverser *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined4 local_68 [4];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar1 = (long *)0x0;
  if (param_3 != (AST_Traverser *)0x0) {
    plVar1 = (long *)(param_3 + -8);
  }
  lVar6 = plVar1[0xb];
  plVar1[0xb] = (long)param_2;
                    /* try { // try from 00c0fef0 to 00c0fefb has its CatchHandler @ 00c10098 */
  if ((*(AST_Traverser *)((long)plVar1 + 0x56) == (AST_Traverser)0x0) ||
     (uVar3 = (**(code **)*plVar1)(plVar1,param_2), (uVar3 & 1) != 0)) {
    switch(*(undefined4 *)(param_2 + 0x48)) {
    case 0x4f:
                    /* try { // try from 00c0ff34 to 00c0ff53 has its CatchHandler @ 00c10090 */
      lVar5 = (**(code **)(**(long **)(param_2 + 0x58) + 0x28))();
      (**(code **)(*plVar1 + 0x30))
                (plVar1,*(undefined8 *)(param_2 + 0x50),*(undefined4 *)(*(long *)(lVar5 + 0x48) + 4)
                );
      break;
    case 0x50:
                    /* try { // try from 00c0ff94 to 00c0ff9b has its CatchHandler @ 00c10080 */
      (**(code **)(*plVar1 + 0x38))
                (plVar1,*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58));
      break;
    case 0x51:
                    /* try { // try from 00c0ff64 to 00c0ff83 has its CatchHandler @ 00c10088 */
      lVar5 = (**(code **)(**(long **)(param_2 + 0x58) + 0x28))();
      (**(code **)(*plVar1 + 0x28))
                (plVar1,*(undefined8 *)(param_2 + 0x50),*(undefined4 *)(*(long *)(lVar5 + 0x48) + 4)
                );
      break;
    case 0x52:
                    /* try { // try from 00c0ffac to 00c0ffaf has its CatchHandler @ 00c10078 */
      lVar4 = (**(code **)(**(long **)(param_2 + 0x58) + 0x30))();
      lVar5 = *(long *)(lVar4 + 0x50);
      if (*(long *)(lVar4 + 0x58) == lVar5) {
        uVar3 = 0;
      }
      else {
        uVar7 = 0;
        do {
                    /* try { // try from 00c0ffd4 to 00c0ffd7 has its CatchHandler @ 00c100a0 */
          lVar5 = (**(code **)(**(long **)(lVar5 + uVar7 * 8) + 0x28))();
          uVar3 = (ulong)((int)uVar7 + 1);
          local_68[uVar7] = *(undefined4 *)(*(long *)(lVar5 + 0x48) + 4);
          lVar5 = *(long *)(lVar4 + 0x50);
          uVar7 = uVar3;
        } while (uVar3 < (ulong)(*(long *)(lVar4 + 0x58) - lVar5 >> 3));
      }
                    /* try { // try from 00c1002c to 00c10037 has its CatchHandler @ 00c10070 */
      (**(code **)(*plVar1 + 0x20))(plVar1,*(undefined8 *)(param_2 + 0x50),local_68,uVar3);
      break;
    default:
                    /* try { // try from 00c10010 to 00c10017 has its CatchHandler @ 00c10080 */
      (**(code **)(*plVar1 + 0x40))
                (plVar1,*(undefined4 *)(param_2 + 0x48),param_2 + 0x18,
                 *(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58));
    }
  }
  plVar1[0xb] = lVar6;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



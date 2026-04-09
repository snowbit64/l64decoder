// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: elide
// Entry Point: 00c2955c
// Size: 360 bytes
// Signature: undefined elide(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_Function::elide() */

void IR_Function::elide(void)

{
  long lVar1;
  long in_x0;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *this;
  IR_Section *this_00;
  IR_Section **local_60;
  IR_Section **local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (undefined8 *)(in_x0 + 0xb8);
  uVar2 = IR_Section::containsEarlyReturn();
  if ((uVar2 & 1) != 0) {
    IR_Section::flattenSectionReturns(*(IR_Section **)*this,0,6,0);
  }
  uVar2 = IR_Section::containsEarlyReloop(*(IR_Section **)*this,true);
  if ((uVar2 & 1) != 0) {
    IR_Section::flattenTopLevelReloops();
  }
  local_60 = (IR_Section **)0x0;
  local_58 = (IR_Section **)0x0;
  local_50 = 0;
                    /* try { // try from 00c295e0 to 00c2967f has its CatchHandler @ 00c296c4 */
  IR_Section::reorder(*(IR_Section **)*this,(vector *)&local_60);
  lVar4 = *(long *)(in_x0 + 0xb8);
  lVar3 = *(long *)(in_x0 + 0xc0);
  if (((ulong)((long)local_58 - (long)local_60) < (ulong)(lVar3 - lVar4)) && (lVar3 != lVar4)) {
    uVar2 = 0;
    do {
      this_00 = *(IR_Section **)(lVar4 + uVar2 * 8);
      if ((long)local_58 - (long)local_60 != 0) {
        uVar5 = 0;
        do {
          if (local_60[uVar5] == this_00) goto LAB_00c29650;
          uVar5 = (ulong)((int)uVar5 + 1);
        } while (uVar5 < (ulong)((long)local_58 - (long)local_60 >> 3));
      }
      if (this_00 != (IR_Section *)0x0) {
        IR_Section::~IR_Section(this_00);
        operator_delete(this_00);
        lVar4 = *(long *)(in_x0 + 0xb8);
        lVar3 = *(long *)(in_x0 + 0xc0);
      }
LAB_00c29650:
      uVar2 = (ulong)((int)uVar2 + 1);
    } while (uVar2 < (ulong)(lVar3 - lVar4 >> 3));
  }
  if ((IR_Section ***)this != &local_60) {
    std::__ndk1::vector<IR_Section*,std::__ndk1::allocator<IR_Section*>>::assign<IR_Section**>
              ((vector<IR_Section*,std::__ndk1::allocator<IR_Section*>> *)this,local_60,local_58);
  }
  *(undefined4 *)(in_x0 + 100) = 1;
  if (local_60 != (IR_Section **)0x0) {
    local_58 = local_60;
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



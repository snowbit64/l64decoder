// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0092213c
// Entry Point: 0092213c
// Size: 376 bytes
// Signature: undefined FUN_0092213c(void)


long FUN_0092213c(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined auStack_2a8 [576];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar5 = param_3;
  if ((param_1 != param_2) && (lVar5 = param_1, param_2 != param_3)) {
    param_1 = param_1 + 0x250;
    lVar5 = param_2 + 0x250;
    while( true ) {
      memcpy(auStack_2a8,(void *)(param_1 + -0x248),0x23c);
      uVar7 = *(undefined8 *)(param_1 + -8);
      memcpy((void *)(param_1 + -0x248),(void *)(lVar5 + -0x248),0x23c);
      *(undefined8 *)(param_1 + -8) = *(undefined8 *)(lVar5 + -8);
      memcpy((void *)(lVar5 + -0x248),auStack_2a8,0x23c);
      *(undefined8 *)(lVar5 + -8) = uVar7;
      if (lVar5 == param_3) break;
      bVar3 = param_1 != param_2;
      param_1 = param_1 + 0x250;
      lVar6 = lVar5;
      if (bVar3) {
        lVar6 = param_2;
      }
      lVar5 = lVar5 + 0x250;
      param_2 = lVar6;
    }
    lVar5 = param_2;
    lVar2 = param_2;
    lVar6 = param_1;
    if (param_1 != param_2) {
      do {
        while( true ) {
          lVar4 = lVar2;
          memcpy(auStack_2a8,(void *)(lVar6 + 8),0x23c);
          uVar7 = *(undefined8 *)(lVar6 + 0x248);
          memcpy((void *)(lVar6 + 8),(void *)(param_2 + 8),0x23c);
          *(undefined8 *)(lVar6 + 0x248) = *(undefined8 *)(param_2 + 0x248);
          memcpy((void *)(param_2 + 8),auStack_2a8,0x23c);
          *(undefined8 *)(param_2 + 0x248) = uVar7;
          lVar6 = lVar6 + 0x250;
          param_2 = param_2 + 0x250;
          if (param_2 == param_3) break;
          lVar2 = param_2;
          if (lVar6 != lVar4) {
            lVar2 = lVar4;
          }
        }
        lVar5 = param_1;
        lVar2 = lVar4;
        param_2 = lVar4;
      } while (lVar6 != lVar4);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar5;
}



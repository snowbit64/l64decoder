// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a9114
// Entry Point: 007a9114
// Size: 280 bytes
// Signature: undefined FUN_007a9114(void)


void FUN_007a9114(LightSource *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  LightSource *pLVar4;
  long lVar5;
  long lVar6;
  LightSource *local_b0 [9];
  long local_68;
  
  lVar2 = tpidr_el0;
  lVar6 = 0;
  lVar5 = 0;
  local_68 = *(long *)(lVar2 + 0x28);
  do {
    iVar1 = *(int *)(param_2 + lVar6 + 8);
    if (iVar1 == 0) {
      if ((int)lVar6 != 0) goto LAB_007a91e8;
      goto LAB_007a91f8;
    }
    uVar3 = 0;
    switch(iVar1) {
    case 1:
    case 2:
      uVar3 = *(uint *)(param_2 + lVar6);
      break;
    case 4:
      uVar3 = (uint)*(float *)(param_2 + lVar6);
      break;
    case 5:
      uVar3 = (uint)*(double *)(param_2 + lVar6);
    }
    pLVar4 = (LightSource *)
             ReflectionUtil::getEntity(uVar3,0x2000,"mergeLightShadows","lightSource<i>");
    if (pLVar4 == (LightSource *)0x0) goto LAB_007a91f8;
    local_b0[lVar5] = pLVar4;
    lVar5 = lVar5 + 1;
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0x90);
  lVar5 = 9;
LAB_007a91e8:
  LightSource::mergeLightShadows(param_1,local_b0,(uint)lVar5);
LAB_007a91f8:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



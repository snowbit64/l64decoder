// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opensles_init
// Entry Point: 00e3966c
// Size: 944 bytes
// Signature: undefined __cdecl opensles_init(Soloud * param_1, uint param_2, uint param_3, uint param_4, uint param_5)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoLoud::opensles_init(SoLoud::Soloud*, unsigned int, unsigned int, unsigned int, unsigned int) */

void SoLoud::opensles_init(Soloud *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long **pplVar4;
  long *plVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulong uVar8;
  size_t __n;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined4 *puStack_a8;
  undefined4 local_a0;
  int iStack_9c;
  int local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pplVar4 = (long **)operator_new(0x90);
  pplVar4[0xb] = (long *)0x0;
  pplVar4[10] = (long *)0x0;
  pplVar4[0xd] = (long *)0x0;
  pplVar4[0xc] = (long *)0x0;
  *(uint *)(pplVar4 + 0xc) = param_4;
  *(uint *)((long)pplVar4 + 100) = param_5;
  uVar8 = (ulong)(param_5 * param_4) << 1;
  pplVar4[1] = (long *)0x0;
  *pplVar4 = (long *)0x0;
  pplVar4[3] = (long *)0x0;
  pplVar4[2] = (long *)0x0;
  __n = (size_t)(int)(param_5 * param_4 * 2);
  pplVar4[5] = (long *)0x0;
  pplVar4[4] = (long *)0x0;
  pplVar4[7] = (long *)0x0;
  pplVar4[6] = (long *)0x0;
  pplVar4[9] = (long *)0x0;
  pplVar4[8] = (long *)0x0;
  pplVar4[0xf] = (long *)0x0;
  pplVar4[0xe] = (long *)0x0;
  pplVar4[0x11] = (long *)0x0;
  pplVar4[0x10] = (long *)0x0;
  plVar5 = (long *)operator_new__(uVar8);
  pplVar4[0xd] = plVar5;
  memset(plVar5,0,__n);
  plVar5 = (long *)operator_new__(uVar8);
  pplVar4[0xe] = plVar5;
  memset(plVar5,0,__n);
  local_80 = 0x100000001;
  iVar3 = slCreateEngine(pplVar4,1,&local_80,0,0,0);
  if (iVar3 == 0) {
    (**(code **)**pplVar4)(*pplVar4,0);
    iVar3 = (**(code **)(**pplVar4 + 0x18))(*pplVar4,_SL_IID_ENGINE,pplVar4 + 1);
    uVar6 = _SL_IID_VOLUME;
    if (iVar3 == 0) {
      local_74 = 0;
      local_60 = uVar6;
      iVar3 = (**(code **)(*pplVar4[1] + 0x38))(pplVar4[1],pplVar4 + 2,1,&local_60,&local_74);
      if (iVar3 == 0) {
        (**(code **)*pplVar4[2])(pplVar4[2],0);
        iVar3 = (**(code **)(*pplVar4[2] + 0x18))(pplVar4[2],uVar6,pplVar4 + 3);
        if (iVar3 != 0) {
          __android_log_print(4,"SoLoud","Failed to get output mix volume interface.");
        }
        iStack_9c = *(int *)((long)pplVar4 + 100);
        local_98 = param_3 * 1000;
        local_a0 = 2;
        local_b0 = (undefined8 *)((long)pplVar4 + 0x84);
        *local_b0 = 0x2800007bd;
        local_8c = 3;
        if (iStack_9c != 2) {
          local_8c = 4;
        }
        *(undefined4 *)(pplVar4 + 4) = 4;
        local_94 = 0x1000000010;
        uStack_88 = 2;
        puStack_a8 = &local_a0;
        pplVar4[6] = (long *)(pplVar4 + 4);
        pplVar4[7] = (long *)0x0;
        uVar2 = _SL_IID_ANDROIDSIMPLEBUFFERQUEUE;
        uStack_68 = _SL_IID_ANDROIDSIMPLEBUFFERQUEUE;
        pplVar4[5] = pplVar4[2];
        local_b8 = 0x100000001;
        local_70 = uVar6;
        (**(code **)(*pplVar4[1] + 0x10))
                  (pplVar4[1],pplVar4 + 8,&local_b0,pplVar4 + 6,2,&local_70,&local_b8);
        (**(code **)*pplVar4[8])(pplVar4[8],0);
        (**(code **)(*pplVar4[8] + 0x18))(pplVar4[8],_SL_IID_PLAY,pplVar4 + 9);
        (**(code **)(*pplVar4[8] + 0x18))(pplVar4[8],uVar6,pplVar4 + 10);
        (**(code **)(*pplVar4[8] + 0x18))(pplVar4[8],uVar2,pplVar4 + 0xb);
        plVar5 = pplVar4[9];
        *(long ***)param_1 = pplVar4;
        (**(code **)(*plVar5 + 0x20))(plVar5,FUN_00e39a1c,param_1);
        (**(code **)(*pplVar4[9] + 0x28))(pplVar4[9],1);
        (**(code **)*pplVar4[9])(pplVar4[9],3);
        Soloud::postinit(param_1,param_3,*(uint *)(pplVar4 + 0xc),param_2,2);
        *(code **)(param_1 + 0x18) = soloud_opensles_deinit;
        __android_log_print(4,"SoLoud","Creating audio thread.");
        Thread::createThread(FUN_00e39a38,param_1);
        uVar6 = 0;
        *(char **)(param_1 + 0x20b0) = "OpenSL ES";
        if (*(long *)(lVar1 + 0x28) == local_58) {
          return;
        }
        goto LAB_00e39a18;
      }
      pcVar7 = "Failed to create output mix object.";
    }
    else {
      pcVar7 = "Failed to get engine interface.";
    }
  }
  else {
    pcVar7 = "Failed to create engine.";
  }
  __android_log_print(6,"SoLoud",pcVar7);
  uVar6 = 7;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_00e39a18:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}



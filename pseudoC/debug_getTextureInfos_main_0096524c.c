// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: debug_getTextureInfos_main
// Entry Point: 0096524c
// Size: 536 bytes
// Signature: undefined __cdecl debug_getTextureInfos_main(char * param_1)


/* TextureStreamingManager::debug_getTextureInfos_main(char const*) const */

void TextureStreamingManager::debug_getTextureInfos_main(char *param_1)

{
  long lVar1;
  char *pcVar2;
  size_t __n;
  char *in_x1;
  ulong *in_x8;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  void *__dest;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined2 uVar9;
  float fVar10;
  undefined8 uVar11;
  char acStack_468 [1024];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  plVar6 = *(long **)(param_1 + 0x160);
  do {
    if (plVar6 == (long *)0x0) {
      *(undefined2 *)in_x8 = 0;
LAB_00965428:
      if (*(long *)(lVar1 + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar7 = plVar6[2];
    Mutex::enterCriticalSection();
    uVar3 = *(ulong *)(param_1 + 0x310);
    uVar11 = NEON_cnt(uVar3,1);
    uVar9 = NEON_uaddlv(uVar11,1);
    if ((uint)CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar9) < 2) {
      uVar5 = uVar3 - 1 & uVar7;
    }
    else {
      uVar5 = uVar7;
      if (uVar3 <= uVar7) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar7 / uVar3;
        }
        uVar5 = uVar7 - uVar5 * uVar3;
      }
    }
    plVar4 = *(long **)(*(long *)(param_1 + 0x308) + uVar5 * 8);
    do {
      do {
        plVar4 = (long *)*plVar4;
      } while (plVar4[1] != uVar7);
    } while (plVar4[2] != uVar7);
    lVar8 = plVar4[3];
                    /* try { // try from 00965300 to 00965307 has its CatchHandler @ 00965464 */
    Mutex::leaveCriticalSection();
    pcVar2 = (char *)(lVar8 + 0x31);
    if ((*(byte *)(lVar8 + 0x30) & 1) != 0) {
      pcVar2 = *(char **)(lVar8 + 0x40);
    }
    pcVar2 = strstr(pcVar2,in_x1);
    if (pcVar2 != (char *)0x0) {
      uVar3 = (**(code **)(**(long **)(lVar8 + 0x68) + 0x20))();
      uVar7 = (**(code **)(**(long **)(lVar8 + 0x68) + 0x28))(*(long **)(lVar8 + 0x68));
      fVar10 = (float)NEON_fmin(*(float *)((long)plVar6 + 0x24) * *(float *)((long)plVar6 + 0x24),
                                0x4d800000);
      fVar10 = log2f(fVar10);
      exp2f((fVar10 - (float)(uVar3 & 0xffffffff) / (float)(uVar7 & 0xffffffff)) * 0.5);
      FUN_00965554((double)*(float *)(plVar6 + 5),acStack_468,0x400,0x400,
                   "%s => priority: %.2f count: %u ideal resolution: [%u %u]");
      __n = strlen(acStack_468);
      if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (__n < 0x17) {
        __dest = (void *)((long)in_x8 + 1);
        *(char *)in_x8 = (char)((int)__n << 1);
        if (__n != 0) goto LAB_00965414;
      }
      else {
        uVar3 = __n + 0x10 & 0xfffffffffffffff0;
        __dest = operator_new(uVar3);
        in_x8[1] = __n;
        in_x8[2] = (ulong)__dest;
        *in_x8 = uVar3 | 1;
LAB_00965414:
        memcpy(__dest,acStack_468,__n);
      }
      *(undefined *)((long)__dest + __n) = 0;
      goto LAB_00965428;
    }
    plVar6 = (long *)*plVar6;
  } while( true );
}



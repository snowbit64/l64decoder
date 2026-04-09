// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_Parse
// Entry Point: 00d2e52c
// Size: 492 bytes
// Signature: undefined XML_Parse(void)


void XML_Parse(long param_1,void *param_2,uint param_3,int param_4)

{
  long lVar1;
  char cVar2;
  int iVar3;
  __pid_t _Var4;
  void *__dest;
  undefined4 uVar5;
  timeval tStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((param_1 == 0) || ((int)param_3 < 0)) || ((param_2 == (void *)0x0 && (param_3 != 0)))) {
    if (param_1 == 0) {
      __dest = (void *)0x0;
      goto LAB_00d2e588;
    }
    uVar5 = 0x29;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x388);
    if (iVar3 == 0) {
      if (*(long *)(param_1 + 0x380) == 0) {
        if (*(long *)(param_1 + 0x398) == 0) {
          gettimeofday(&tStack_58,(__timezone_ptr_t)0x0);
          _Var4 = getpid();
          *(__suseconds_t *)(param_1 + 0x398) =
               ((tStack_58.tv_usec ^ _Var4) << 0x3d) - (tStack_58.tv_usec ^ _Var4);
        }
        if ((*(char *)(param_1 + 0x1c8) != '\0') &&
           (cVar2 = FUN_00d2d7e8(param_1,"xml=http://www.w3.org/XML/1998/namespace"), cVar2 == '\0')
           ) {
          uVar5 = 1;
          goto LAB_00d2e578;
        }
      }
LAB_00d2e5d8:
      *(undefined4 *)(param_1 + 0x388) = 1;
      if (param_3 != 0) {
        __dest = (void *)XML_GetBuffer(param_1,param_3);
        if (__dest != (void *)0x0) {
          memcpy(__dest,param_2,(ulong)param_3);
          __dest = (void *)XML_ParseBuffer(param_1,param_3,param_4);
        }
        goto LAB_00d2e588;
      }
      *(char *)(param_1 + 0x38c) = (char)param_4;
      if (param_4 != 0) {
        *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x38);
        *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_1 + 0x30);
        iVar3 = (**(code **)(param_1 + 0x210))(param_1);
        *(int *)(param_1 + 0x218) = iVar3;
        if (iVar3 != 0) {
          __dest = (void *)0x0;
          *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(param_1 + 0x220);
          *(code **)(param_1 + 0x210) = FUN_00d2e718;
          goto LAB_00d2e588;
        }
        if (*(uint *)(param_1 + 0x388) < 2) {
          __dest = (void *)0x1;
          *(undefined4 *)(param_1 + 0x388) = 2;
          goto LAB_00d2e588;
        }
        if (*(uint *)(param_1 + 0x388) == 3) {
          (**(code **)(*(long *)(param_1 + 0x120) + 0x60))
                    (*(long *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x230),
                     *(undefined8 *)(param_1 + 0x30),param_1 + 0x300);
          __dest = (void *)0x2;
          *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_1 + 0x30);
          goto LAB_00d2e588;
        }
      }
      __dest = (void *)0x1;
      goto LAB_00d2e588;
    }
    if (iVar3 == 2) {
      uVar5 = 0x24;
    }
    else {
      if (iVar3 != 3) goto LAB_00d2e5d8;
      uVar5 = 0x21;
    }
  }
LAB_00d2e578:
  __dest = (void *)0x0;
  *(undefined4 *)(param_1 + 0x218) = uVar5;
LAB_00d2e588:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__dest);
}



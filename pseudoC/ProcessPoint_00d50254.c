// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProcessPoint
// Entry Point: 00d50254
// Size: 640 bytes
// Signature: undefined ProcessPoint(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HACD::ICHull::ProcessPoint() */

uint HACD::ICHull::ProcessPoint(void)

{
  ulong uVar1;
  CircularListElement **ppCVar2;
  long lVar3;
  uint uVar4;
  ICHull *in_x0;
  void *pvVar5;
  undefined8 uVar6;
  CircularListElement *pCVar7;
  long lVar8;
  CircularListElement *pCVar9;
  CircularListElement *pCVar10;
  void *__src;
  ulong uVar11;
  CircularListElement *pCVar12;
  double local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_70 = 0.0;
  uVar4 = ComputePointVolume(in_x0,&local_70,true);
  if ((uVar4 & 1) != 0) {
    pCVar12 = *(CircularListElement **)(in_x0 + 0x38);
    pCVar9 = *(CircularListElement **)(in_x0 + 0x18);
    *(void **)(in_x0 + 0xa0) = *(void **)(in_x0 + 0x98);
    *(void **)(in_x0 + 0xb8) = *(void **)(in_x0 + 0xb0);
    pCVar10 = pCVar12;
    do {
      pCVar7 = *(CircularListElement **)(pCVar10 + 0x30);
      lVar8 = (ulong)*(byte *)(*(long *)(pCVar10 + 8) + 0xd0) +
              (ulong)*(byte *)(*(long *)(pCVar10 + 0x10) + 0xd0);
      if (lVar8 == 1) {
        uVar6 = MakeConeFace(in_x0,pCVar10,pCVar9);
        *(undefined8 *)(pCVar10 + 0x28) = uVar6;
        ppCVar2 = *(CircularListElement ***)(in_x0 + 0xb8);
        if (ppCVar2 == *(CircularListElement ***)(in_x0 + 0xc0)) {
          __src = *(void **)(in_x0 + 0xb0);
          uVar11 = (long)ppCVar2 - (long)__src;
          lVar8 = (long)uVar11 >> 3;
          uVar1 = lVar8 + 1;
          if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar1 <= (ulong)((long)uVar11 >> 2)) {
            uVar1 = (long)uVar11 >> 2;
          }
          if (0x7ffffffffffffff7 < uVar11) {
            uVar1 = 0x1fffffffffffffff;
          }
          if (uVar1 == 0) {
            pvVar5 = (void *)0x0;
            ppCVar2 = (CircularListElement **)(lVar8 * 8);
            *ppCVar2 = pCVar10;
          }
          else {
            if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            pvVar5 = operator_new(uVar1 << 3);
            ppCVar2 = (CircularListElement **)((long)pvVar5 + lVar8 * 8);
            *ppCVar2 = pCVar10;
          }
          if (0 < (long)uVar11) {
            memcpy(pvVar5,__src,uVar11);
          }
          *(void **)(in_x0 + 0xb0) = pvVar5;
          *(CircularListElement ***)(in_x0 + 0xb8) = ppCVar2 + 1;
          *(void **)(in_x0 + 0xc0) = (void *)((long)pvVar5 + uVar1 * 8);
joined_r0x00d5043c:
          if (__src != (void *)0x0) {
            operator_delete(__src);
          }
        }
        else {
          *ppCVar2 = pCVar10;
          *(CircularListElement ***)(in_x0 + 0xb8) = ppCVar2 + 1;
        }
      }
      else if (lVar8 == 2) {
        ppCVar2 = *(CircularListElement ***)(in_x0 + 0xa0);
        if (ppCVar2 == *(CircularListElement ***)(in_x0 + 0xa8)) {
          __src = *(void **)(in_x0 + 0x98);
          uVar11 = (long)ppCVar2 - (long)__src;
          lVar8 = (long)uVar11 >> 3;
          uVar1 = lVar8 + 1;
          if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar1 <= (ulong)((long)uVar11 >> 2)) {
            uVar1 = (long)uVar11 >> 2;
          }
          if (0x7ffffffffffffff7 < uVar11) {
            uVar1 = 0x1fffffffffffffff;
          }
          if (uVar1 == 0) {
            pvVar5 = (void *)0x0;
            ppCVar2 = (CircularListElement **)(lVar8 * 8);
            *ppCVar2 = pCVar10;
          }
          else {
            if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            pvVar5 = operator_new(uVar1 << 3);
            ppCVar2 = (CircularListElement **)((long)pvVar5 + lVar8 * 8);
            *ppCVar2 = pCVar10;
          }
          if (0 < (long)uVar11) {
            memcpy(pvVar5,__src,uVar11);
          }
          *(void **)(in_x0 + 0x98) = pvVar5;
          *(CircularListElement ***)(in_x0 + 0xa0) = ppCVar2 + 1;
          *(void **)(in_x0 + 0xa8) = (void *)((long)pvVar5 + uVar1 * 8);
          goto joined_r0x00d5043c;
        }
        *ppCVar2 = pCVar10;
        *(CircularListElement ***)(in_x0 + 0xa0) = ppCVar2 + 1;
      }
      pCVar10 = pCVar7;
    } while (pCVar7 != pCVar12);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



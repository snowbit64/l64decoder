// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: inflateSync
// Entry Point: 00e2cb64
// Size: 624 bytes
// Signature: undefined inflateSync(void)


undefined8 inflateSync(long *param_1)

{
  char *pcVar1;
  ulong uVar2;
  long **pplVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  long *plVar10;
  long **pplVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  char cVar16;
  char local_1c [4];
  long local_18;
  
  lVar6 = tpidr_el0;
  local_18 = *(long *)(lVar6 + 0x28);
  if (((((param_1 == (long *)0x0) || (param_1[8] == 0)) || (param_1[9] == 0)) ||
      ((pplVar11 = (long **)param_1[7], pplVar11 == (long **)0x0 || (*pplVar11 != param_1)))) ||
     (0x1f < *(int *)(pplVar11 + 1) - 0x3f34U)) {
    uVar9 = 0xfffffffe;
  }
  else {
    uVar15 = *(uint *)(param_1 + 1);
    if ((uVar15 == 0) && (*(uint *)(pplVar11 + 0xb) < 8)) {
      uVar9 = 0xfffffffb;
    }
    else {
      if (*(int *)(pplVar11 + 1) == 0x3f53) {
        uVar7 = *(uint *)((long)pplVar11 + 0x8c);
      }
      else {
        uVar15 = *(uint *)(pplVar11 + 0xb);
        *(undefined4 *)(pplVar11 + 1) = 0x3f53;
        plVar10 = (long *)((long)pplVar11[10] << (uVar15 & 7));
        pplVar11[10] = plVar10;
        if ((uVar15 & 0xfffffff8) == 0) {
          uVar7 = 0;
          *(undefined4 *)((long)pplVar11 + 0x8c) = 0;
          *(undefined4 *)(pplVar11 + 0xb) = 0;
        }
        else {
          iVar13 = -(uVar15 & 0xfffffff8);
          uVar12 = 0;
          do {
            uVar2 = uVar12 + 1;
            iVar13 = iVar13 + 8;
            local_1c[uVar12] = (char)plVar10;
            plVar10 = (long *)((ulong)plVar10 >> 8);
            uVar12 = uVar2;
          } while (iVar13 != 0);
          *(undefined4 *)((long)pplVar11 + 0x8c) = 0;
          pplVar11[10] = plVar10;
          *(undefined4 *)(pplVar11 + 0xb) = 0;
          if ((int)uVar2 == 0) {
            uVar7 = 0;
          }
          else {
            uVar12 = 0;
            uVar15 = 0;
            do {
              pcVar1 = local_1c + uVar12;
              cVar16 = '\0';
              if (1 < uVar15) {
                cVar16 = -1;
              }
              uVar7 = 4 - uVar15;
              uVar12 = uVar12 + 1;
              if (*pcVar1 != '\0') {
                uVar7 = 0;
              }
              if (cVar16 == *pcVar1) {
                uVar7 = uVar15 + 1;
              }
            } while ((uVar12 < uVar2) && (uVar15 = uVar7, uVar7 < 4));
          }
        }
        *(uint *)((long)pplVar11 + 0x8c) = uVar7;
        uVar15 = *(uint *)(param_1 + 1);
      }
      uVar12 = 0;
      lVar14 = *param_1;
      if ((uVar15 != 0) && (uVar7 < 4)) {
        uVar12 = 0;
        uVar8 = uVar7;
        do {
          cVar5 = *(char *)(lVar14 + uVar12);
          cVar16 = '\0';
          if (1 < uVar8) {
            cVar16 = -1;
          }
          uVar7 = 4 - uVar8;
          uVar12 = uVar12 + 1;
          if (cVar5 != '\0') {
            uVar7 = 0;
          }
          if (cVar16 == cVar5) {
            uVar7 = uVar8 + 1;
          }
        } while ((uVar12 < uVar15) && (uVar8 = uVar7, uVar7 < 4));
      }
      *(uint *)((long)pplVar11 + 0x8c) = uVar7;
      lVar4 = param_1[2] + (uVar12 & 0xffffffff);
      *param_1 = lVar14 + (uVar12 & 0xffffffff);
      *(int *)(param_1 + 1) = *(int *)(param_1 + 1) - (int)uVar12;
      param_1[2] = lVar4;
      if (uVar7 == 4) {
        lVar14 = param_1[5];
        pplVar11[8] = (long *)0x0;
        *(undefined4 *)((long)pplVar11 + 0x3c) = 0;
        pplVar11[5] = (long *)0x0;
        param_1[5] = 0;
        param_1[6] = 0;
        if (*(uint *)(pplVar11 + 2) != 0) {
          param_1[0xc] = (ulong)*(uint *)(pplVar11 + 2) & 1;
        }
        pplVar3 = pplVar11 + 0xab;
        uVar9 = 0;
        *(undefined4 *)((long)pplVar11 + 0x14) = 0;
        pplVar11[6] = (long *)0x0;
        pplVar11[0x12] = (long *)pplVar3;
        pplVar11[0xd] = (long *)pplVar3;
        pplVar11[0xe] = (long *)pplVar3;
        *(undefined4 *)((long)pplVar11 + 0x1c) = 0x8000;
        pplVar11[10] = (long *)0x0;
        *(undefined4 *)(pplVar11 + 0xb) = 0;
        pplVar11[1] = (long *)0x3f3f;
        param_1[2] = lVar4;
        pplVar11[0x37d] = (long *)0xffffffff00000001;
        param_1[5] = lVar14;
      }
      else {
        uVar9 = 0xfffffffd;
      }
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}



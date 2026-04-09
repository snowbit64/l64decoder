// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f15208
// Entry Point: 00f15208
// Size: 2680 bytes
// Signature: undefined FUN_00f15208(void)


byte * FUN_00f15208(int *param_1,byte *param_2,byte *param_3)

{
  bool bVar1;
  long *plVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  byte *pbVar13;
  long *plVar14;
  long *plVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong __n;
  byte bVar19;
  byte *pbVar20;
  long lVar21;
  bool bVar22;
  byte bVar23;
  
  iVar7 = *param_1;
  *param_1 = iVar7 + -1;
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    luaL_errorL(*(lua_State **)(param_1 + 8),"pattern too complex");
  }
LAB_00f15248:
LAB_00f15258:
  pbVar20 = *(byte **)(param_1 + 6);
LAB_00f1526c:
  pbVar9 = param_2;
  if (param_3 == pbVar20) goto LAB_00f15bc4;
  bVar23 = *param_3;
  if (bVar23 != 0x25) {
    if (bVar23 == 0x24) {
      if (param_3 + 1 == pbVar20) {
        if (param_2 != *(byte **)(param_1 + 4)) {
          pbVar9 = (byte *)0x0;
        }
        goto LAB_00f15bc4;
      }
      bVar23 = 0x24;
LAB_00f15568:
      pbVar10 = param_3 + 1;
      pbVar20 = *(byte **)(param_1 + 4);
      goto joined_r0x00f15578;
    }
    if (bVar23 == 0x29) {
      uVar8 = param_1[10];
      iVar7 = uVar8 + 1;
      lVar11 = (ulong)uVar8 * 0x10 + 0x28;
      plVar15 = (long *)(param_1 + (long)(int)(uVar8 - 1) * 4 + 0x12);
      do {
        plVar14 = plVar15;
        iVar7 = iVar7 + -1;
        if (iVar7 < 1) {
                    /* WARNING: Subroutine does not return */
          luaL_errorL(*(lua_State **)(param_1 + 8),"invalid pattern capture",param_3 + 1);
        }
        plVar2 = (long *)((long)param_1 + lVar11);
        lVar11 = lVar11 + -0x10;
        plVar15 = plVar14 + -2;
      } while (*plVar2 != -1);
      *plVar15 = (long)param_2 - plVar14[-3];
      pbVar9 = (byte *)FUN_00f15208(param_1);
      if (pbVar9 == (byte *)0x0) {
        *plVar15 = -1;
      }
      goto LAB_00f15bc4;
    }
    if (bVar23 != 0x28) {
      if (bVar23 != 0x5b) goto LAB_00f15568;
      pbVar9 = param_3 + 2;
      if (param_3[1] != 0x5e) {
        pbVar9 = param_3 + 1;
      }
      do {
        if (pbVar9 == pbVar20) {
LAB_00f15bf4:
                    /* WARNING: Subroutine does not return */
          luaL_errorL(*(lua_State **)(param_1 + 8),"malformed pattern (missing \']\')");
        }
        pbVar10 = pbVar9 + 2;
        lVar11 = 1;
        if (*pbVar9 == 0x25 && pbVar9 + 1 < pbVar20) {
          lVar11 = 2;
        }
        else {
          pbVar10 = pbVar9 + 1;
        }
        pbVar18 = pbVar9 + lVar11;
        pbVar9 = pbVar10;
      } while (*pbVar18 != 0x5d);
      pbVar10 = pbVar10 + 1;
      bVar23 = 0x5b;
      pbVar20 = *(byte **)(param_1 + 4);
      if (param_2 < pbVar20) goto LAB_00f1557c;
      goto LAB_00f156b8;
    }
    iVar7 = param_1[10];
    lVar11 = (long)iVar7;
    if (param_3[1] == 0x29) {
      if (0x1f < iVar7) {
LAB_00f15c4c:
                    /* WARNING: Subroutine does not return */
        luaL_errorL(*(lua_State **)(param_1 + 8),"too many captures");
      }
      *(byte **)(param_1 + lVar11 * 4 + 0xc) = param_2;
      *(undefined8 *)(param_1 + lVar11 * 4 + 0xe) = 0xfffffffffffffffe;
      param_1[10] = iVar7 + 1;
      pbVar9 = (byte *)FUN_00f15208(param_1,param_2,param_3 + 2);
    }
    else {
      if (0x1f < iVar7) goto LAB_00f15c4c;
      *(byte **)(param_1 + lVar11 * 4 + 0xc) = param_2;
      *(undefined8 *)(param_1 + lVar11 * 4 + 0xe) = 0xffffffffffffffff;
      param_1[10] = iVar7 + 1;
      pbVar9 = (byte *)FUN_00f15208(param_1,param_2);
    }
    if (pbVar9 == (byte *)0x0) {
      param_1[10] = param_1[10] + -1;
    }
    goto LAB_00f15bc4;
  }
  bVar23 = param_3[1];
  if (bVar23 == 0x66) {
    pbVar9 = param_3 + 2;
    if (*pbVar9 != 0x5b) {
                    /* WARNING: Subroutine does not return */
      luaL_errorL(*(lua_State **)(param_1 + 8),"missing \'[\' after \'%%f\' in pattern");
    }
    pbVar18 = param_3 + 3;
    bVar23 = *pbVar18;
    bVar6 = bVar23 == 0x5e;
    pbVar10 = pbVar18;
    if (bVar6) {
      pbVar10 = param_3 + 4;
    }
    do {
      if (pbVar10 == pbVar20) goto LAB_00f15bf4;
      pbVar13 = pbVar10 + 2;
      lVar11 = 1;
      if (*pbVar10 == 0x25 && pbVar10 + 1 < pbVar20) {
        lVar11 = 2;
      }
      else {
        pbVar13 = pbVar10 + 1;
      }
      pbVar17 = pbVar10 + lVar11;
      pbVar10 = pbVar13;
    } while (*pbVar17 != 0x5d);
    if (param_2 == *(byte **)(param_1 + 2)) {
      bVar19 = 0;
      if (bVar23 != 0x5e) {
        pbVar18 = pbVar9;
      }
    }
    else {
      bVar19 = param_2[-1];
      if (bVar23 != 0x5e) {
        pbVar18 = pbVar9;
      }
    }
    pbVar9 = pbVar18 + 1;
    if (pbVar9 < pbVar13) {
      param_3 = pbVar13 + 1;
      pbVar10 = pbVar9;
      pbVar17 = pbVar18;
      do {
        while( true ) {
          pbVar16 = pbVar17 + 2;
          bVar3 = pbVar17[1];
          if (bVar3 != 0x25) break;
          iVar7 = FUN_00f15c80(bVar19);
          if (iVar7 != 0) {
LAB_00f153d4:
            if (bVar23 == 0x5e) goto LAB_00f153e8;
            goto LAB_00f15bc0;
          }
LAB_00f15360:
          pbVar10 = pbVar16 + 1;
          pbVar17 = pbVar16;
          if (pbVar13 <= pbVar10) goto LAB_00f153e0;
        }
        if ((*pbVar16 != 0x2d) || (pbVar16 = pbVar17 + 3, pbVar13 <= pbVar16)) {
          pbVar16 = pbVar10;
          if (bVar3 == bVar19) goto LAB_00f153d4;
          goto LAB_00f15360;
        }
        if (bVar3 <= bVar19) {
          if (bVar19 <= *pbVar16) goto LAB_00f153d4;
          goto LAB_00f15360;
        }
        pbVar10 = pbVar17 + 4;
        pbVar17 = pbVar16;
      } while (pbVar10 < pbVar13);
LAB_00f153e0:
      if (!bVar6) goto LAB_00f153e8;
    }
    goto LAB_00f15bc0;
  }
  uVar8 = (uint)bVar23;
  if (bVar23 - 0x30 < 10) {
    uVar4 = uVar8 - 0x31;
    if (((uVar8 < 0x31) || (param_1[10] <= (int)uVar4)) ||
       (__n = *(ulong *)(param_1 + (ulong)uVar4 * 4 + 0xe), __n == 0xffffffffffffffff)) {
                    /* WARNING: Subroutine does not return */
      luaL_errorL(*(lua_State **)(param_1 + 8),"invalid capture index %%%d",(ulong)(uVar8 - 0x30));
    }
    if ((ulong)(*(long *)(param_1 + 4) - (long)param_2) < __n) goto LAB_00f15bc0;
    iVar7 = memcmp(*(void **)(param_1 + (ulong)uVar4 * 4 + 0xc),param_2,__n);
    pbVar9 = (byte *)0x0;
    if ((iVar7 != 0) || (param_2 == (byte *)0x0)) goto LAB_00f15bc4;
    param_2 = param_2 + __n;
    param_3 = param_3 + 2;
    goto LAB_00f15248;
  }
  if (uVar8 == 0x62) {
    if (pbVar20 + -1 <= param_3 + 2) {
                    /* WARNING: Subroutine does not return */
      luaL_errorL(*(lua_State **)(param_1 + 8),"malformed pattern (missing arguments to \'%%b\')");
    }
    if ((*param_2 != param_3[2]) || (*(byte **)(param_1 + 4) <= param_2 + 1)) goto LAB_00f15bc0;
    pbVar20 = param_2 + 2;
    pbVar9 = *(byte **)(param_1 + 4) + ~(ulong)param_2;
    iVar7 = 1;
    goto LAB_00f157a8;
  }
  if (param_3 + 1 == pbVar20) {
                    /* WARNING: Subroutine does not return */
    luaL_errorL(*(lua_State **)(param_1 + 8),"malformed pattern (ends with \'%%\')");
  }
  pbVar10 = param_3 + 2;
  bVar23 = 0x25;
  pbVar20 = *(byte **)(param_1 + 4);
joined_r0x00f15578:
  if (pbVar20 <= param_2) goto LAB_00f156b8;
LAB_00f1557c:
  pbVar18 = param_3 + 1;
  bVar19 = *param_2;
  if (bVar23 == 0x5b) {
    pbVar13 = pbVar10 + -1;
    bVar6 = param_3[1] != 0x5e;
    pbVar9 = pbVar18;
    if (bVar6) {
      pbVar9 = param_3;
    }
    pbVar17 = pbVar9 + 1;
joined_r0x00f155d0:
    pbVar16 = pbVar9;
    if (pbVar17 < pbVar13) {
      do {
        pbVar9 = pbVar16 + 2;
        bVar3 = pbVar16[1];
        if (bVar3 == 0x25) {
          iVar7 = FUN_00f15c80(bVar19);
          if (iVar7 != 0) goto LAB_00f15660;
        }
        else if ((*pbVar9 == 0x2d) && (pbVar9 = pbVar16 + 3, pbVar9 < pbVar13)) {
          if (bVar19 < bVar3) goto code_r0x00f1562c;
          if (bVar19 <= *pbVar9) {
LAB_00f15660:
            if (bVar6) goto LAB_00f1568c;
            goto LAB_00f156b8;
          }
        }
        else {
          pbVar9 = pbVar17;
          if (bVar3 == bVar19) goto LAB_00f15660;
        }
        pbVar17 = pbVar9 + 1;
        pbVar16 = pbVar9;
        if (pbVar13 <= pbVar17) break;
      } while( true );
    }
    if (!bVar6) goto LAB_00f1568c;
    goto LAB_00f156b8;
  }
  if (bVar23 != 0x2e) {
    if (bVar23 != 0x25) {
      if (bVar23 != bVar19) goto LAB_00f156b8;
      goto LAB_00f1568c;
    }
    iVar7 = FUN_00f15c80(bVar19,*pbVar18);
    if (iVar7 != 0) goto LAB_00f1568c;
LAB_00f156b8:
    pbVar9 = (byte *)0x0;
    if ((0x3f < *pbVar10) || ((1L << ((ulong)*pbVar10 & 0x3f) & 0x8000240000000000U) == 0))
    goto LAB_00f15bc4;
    param_3 = pbVar10 + 1;
    goto LAB_00f15258;
  }
LAB_00f1568c:
  bVar19 = *pbVar10;
  if (bVar19 == 0x3f) {
    param_3 = pbVar10 + 1;
    pbVar9 = (byte *)FUN_00f15208(param_1,param_2 + 1,param_3);
    if (pbVar9 != (byte *)0x0) goto LAB_00f15bc4;
    goto LAB_00f15258;
  }
  if (bVar19 != 0x2a) {
    if (bVar19 != 0x2b) {
      if (bVar19 == 0x2d) {
        pbVar9 = (byte *)FUN_00f15208(param_1,param_2,pbVar10 + 1);
        if (pbVar9 == (byte *)0x0) {
          goto LAB_00f15a34;
        }
        goto LAB_00f15bc4;
      }
      param_2 = param_2 + 1;
      param_3 = pbVar10;
      goto LAB_00f15248;
    }
    param_2 = param_2 + 1;
  }
  if (bVar23 == 0x25) {
    lVar5 = 0;
    lVar11 = 0;
    if (param_2 <= pbVar20) {
      lVar11 = (long)pbVar20 - (long)param_2;
    }
    goto LAB_00f15b2c;
  }
  if (bVar23 == 0x2e) {
    lVar21 = 0;
    if (param_2 <= pbVar20) {
      lVar21 = (long)pbVar20 - (long)param_2;
    }
    goto LAB_00f15b9c;
  }
  if (bVar23 != 0x5b) {
    lVar5 = 0;
    lVar11 = 0;
    if (param_2 <= pbVar20) {
      lVar11 = (long)pbVar20 - (long)param_2;
    }
    goto LAB_00f15b6c;
  }
  pbVar9 = pbVar10 + -1;
  lVar5 = 0;
  lVar11 = 0;
  if (param_2 <= pbVar20) {
    lVar11 = (long)pbVar20 - (long)param_2;
  }
  goto LAB_00f15934;
LAB_00f153e8:
  bVar19 = *param_2;
  do {
    while( true ) {
      bVar3 = pbVar18[1];
      if (bVar3 != 0x25) break;
      iVar7 = FUN_00f15c80(bVar19);
      pbVar18 = pbVar18 + 2;
      if (iVar7 != 0) {
LAB_00f15260:
        if (bVar23 == 0x5e) goto LAB_00f15bc0;
        goto LAB_00f1526c;
      }
LAB_00f15400:
      pbVar9 = pbVar18 + 1;
      if (pbVar13 <= pbVar9) goto LAB_00f15478;
    }
    if ((pbVar18[2] != 0x2d) || (pbVar10 = pbVar18 + 3, pbVar13 <= pbVar10)) {
      pbVar18 = pbVar9;
      if (bVar3 == bVar19) goto LAB_00f15260;
      goto LAB_00f15400;
    }
    if (bVar3 <= bVar19) {
      pbVar18 = pbVar10;
      if (bVar19 <= *pbVar10) goto LAB_00f15260;
      goto LAB_00f15400;
    }
    pbVar9 = pbVar18 + 4;
    pbVar18 = pbVar10;
  } while (pbVar9 < pbVar13);
LAB_00f15478:
  if (!bVar6) goto LAB_00f15bc0;
  goto LAB_00f1526c;
LAB_00f157a8:
  if (pbVar20[-1] == param_3[3]) {
    iVar7 = iVar7 + -1;
    if (iVar7 == 0) goto code_r0x00f157bc;
  }
  else if (pbVar20[-1] == *param_2) {
    iVar7 = iVar7 + 1;
  }
  pbVar20 = pbVar20 + 1;
  pbVar9 = pbVar9 + -1;
  if (pbVar9 == (byte *)0x0) goto LAB_00f15bc0;
  goto LAB_00f157a8;
code_r0x00f157bc:
  param_3 = param_3 + 4;
  param_2 = pbVar20;
  goto LAB_00f15248;
code_r0x00f1562c:
  pbVar17 = pbVar16 + 4;
  goto joined_r0x00f155d0;
LAB_00f15a34:
  do {
    if (*(byte **)(param_1 + 4) <= param_2) goto LAB_00f15bc0;
    bVar23 = *param_3;
    bVar19 = *param_2;
    if (bVar23 == 0x5b) {
      bVar6 = param_3[1] == 0x5e;
      pbVar20 = pbVar18;
      if (!bVar6) {
        pbVar20 = param_3;
      }
      bVar1 = !bVar6;
      do {
        while( true ) {
          pbVar9 = pbVar20 + 1;
          bVar22 = bVar6;
          if (pbVar10 + -1 <= pbVar9) goto LAB_00f15b10;
          bVar23 = pbVar20[1];
          bVar22 = bVar1;
          if (bVar23 == 0x25) break;
          if ((pbVar20[2] == 0x2d) && (pbVar20 = pbVar20 + 3, pbVar20 < pbVar10 + -1)) {
            if ((bVar23 <= bVar19) && (bVar19 <= *pbVar20)) goto LAB_00f15b10;
          }
          else {
            pbVar20 = pbVar9;
            if (bVar23 == bVar19) goto LAB_00f15b10;
          }
        }
        iVar7 = FUN_00f15c80(bVar19);
        pbVar20 = pbVar20 + 2;
      } while (iVar7 == 0);
LAB_00f15b10:
      uVar8 = (uint)bVar22;
LAB_00f15a18:
      if (uVar8 == 0) goto LAB_00f15bc0;
    }
    else if (bVar23 != 0x2e) {
      if (bVar23 == 0x25) {
        uVar8 = FUN_00f15c80(bVar19,*pbVar18);
      }
      else {
        uVar8 = (uint)(bVar23 == bVar19);
      }
      goto LAB_00f15a18;
    }
    param_2 = param_2 + 1;
    pbVar9 = (byte *)FUN_00f15208(param_1,param_2,pbVar10 + 1);
  } while (pbVar9 == (byte *)0x0);
  goto LAB_00f15bc4;
  while( true ) {
    iVar7 = FUN_00f15c80(param_2[lVar12],*pbVar18);
    lVar5 = lVar12 + 1;
    lVar21 = lVar12;
    if (iVar7 == 0) break;
LAB_00f15b2c:
    lVar12 = lVar5;
    lVar21 = lVar11;
    if (lVar11 == lVar12) break;
  }
  goto LAB_00f15b9c;
LAB_00f15934:
  do {
    lVar12 = lVar5;
    lVar21 = lVar11;
    if (lVar12 == lVar11) break;
    bVar6 = param_3[1] == 0x5e;
    pbVar20 = pbVar18;
    if (!bVar6) {
      pbVar20 = param_3;
    }
    bVar1 = !bVar6;
    pbVar13 = pbVar20 + 1;
    bVar22 = bVar6;
    if (pbVar13 < pbVar9) {
      bVar23 = param_2[lVar12];
      do {
        while( true ) {
          pbVar17 = pbVar20 + 2;
          bVar19 = pbVar20[1];
          bVar22 = bVar1;
          if (bVar19 != 0x25) break;
          iVar7 = FUN_00f15c80(bVar23);
          if (iVar7 != 0) goto LAB_00f1592c;
LAB_00f15978:
          pbVar13 = pbVar17 + 1;
          pbVar20 = pbVar17;
          bVar22 = bVar6;
          if (pbVar9 <= pbVar13) goto LAB_00f1592c;
        }
        if ((*pbVar17 != 0x2d) || (pbVar17 = pbVar20 + 3, pbVar9 <= pbVar17)) {
          pbVar17 = pbVar13;
          if (bVar19 != bVar23) goto LAB_00f15978;
          break;
        }
        if (bVar19 <= bVar23) {
          if (*pbVar17 < bVar23) goto LAB_00f15978;
          break;
        }
        pbVar13 = pbVar20 + 4;
        pbVar20 = pbVar17;
        bVar22 = bVar6;
      } while (pbVar13 < pbVar9);
    }
LAB_00f1592c:
    lVar5 = lVar12 + 1;
    lVar21 = lVar12;
  } while (bVar22);
  goto LAB_00f15b9c;
LAB_00f15bc0:
  pbVar9 = (byte *)0x0;
  goto LAB_00f15bc4;
  while (lVar5 = lVar12 + 1, lVar21 = lVar12, bVar23 == param_2[lVar12]) {
LAB_00f15b6c:
    lVar12 = lVar5;
    lVar21 = lVar11;
    if (lVar11 == lVar12) break;
  }
LAB_00f15b9c:
  do {
    if (lVar21 < 0) goto LAB_00f15bc0;
    pbVar9 = (byte *)FUN_00f15208(param_1,param_2 + lVar21,pbVar10 + 1);
    lVar21 = lVar21 + -1;
  } while (pbVar9 == (byte *)0x0);
LAB_00f15bc4:
  *param_1 = *param_1 + 1;
  return pbVar9;
}



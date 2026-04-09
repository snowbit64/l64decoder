// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gsParser_lex
// Entry Point: 00c1fda0
// Size: 3164 bytes
// Signature: undefined __cdecl gsParser_lex(GSPARSER_STYPE * param_1, void * param_2)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* gsParser_lex(GSPARSER_STYPE*, void*) */

undefined8 gsParser_lex(GSPARSER_STYPE *param_1,void *param_2)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  yy_buffer_state *pyVar6;
  GsTInfoSinkBase *pGVar7;
  char *pcVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  byte bVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  byte *pbVar17;
  undefined *puVar18;
  byte *pbVar19;
  byte *pbVar20;
  int iVar21;
  double dVar22;
  undefined8 uVar23;
  
  *(GSPARSER_STYPE **)((long)param_2 + 0x90) = param_1;
  if (*(int *)((long)param_2 + 0x48) != 0) goto switchD_00c1ff24_caseD_c1febc;
  *(undefined4 *)((long)param_2 + 0x48) = 1;
  if (*(int *)((long)param_2 + 0x4c) == 0) {
    *(undefined4 *)((long)param_2 + 0x4c) = 1;
    if (*(long *)((long)param_2 + 8) == 0) goto LAB_00c1fe04;
LAB_00c1fde4:
    if (*(long *)((long)param_2 + 0x10) != 0) goto LAB_00c1fdec;
LAB_00c1fe1c:
    *(undefined8 *)((long)param_2 + 0x10) = _stdout;
    lVar10 = *(long *)((long)param_2 + 0x28);
    if (lVar10 != 0) goto LAB_00c1fe34;
LAB_00c1fe40:
    FUN_00c209fc(param_2);
    uVar5 = gsParser__create_buffer(*(__sFILE **)((long)param_2 + 8),0x4000,param_2);
    lVar14 = *(long *)((long)param_2 + 0x18);
    *(undefined8 *)(*(long *)((long)param_2 + 0x28) + lVar14 * 8) = uVar5;
    lVar10 = *(long *)((long)param_2 + 0x28);
    lVar16 = *(long *)(lVar10 + lVar14 * 8);
  }
  else {
    if (*(long *)((long)param_2 + 8) != 0) goto LAB_00c1fde4;
LAB_00c1fe04:
    *(undefined8 *)((long)param_2 + 8) = _stdin;
    if (*(long *)((long)param_2 + 0x10) == 0) goto LAB_00c1fe1c;
LAB_00c1fdec:
    lVar10 = *(long *)((long)param_2 + 0x28);
    if (lVar10 == 0) goto LAB_00c1fe40;
LAB_00c1fe34:
    lVar14 = *(long *)((long)param_2 + 0x18);
    lVar16 = *(long *)(lVar10 + lVar14 * 8);
    if (lVar16 == 0) goto LAB_00c1fe40;
  }
  puVar18 = *(undefined **)(lVar16 + 0x10);
  *(undefined **)((long)param_2 + 0x40) = puVar18;
  *(undefined **)((long)param_2 + 0x80) = puVar18;
  uVar5 = **(undefined8 **)(lVar10 + lVar14 * 8);
  *(undefined4 *)((long)param_2 + 0x34) = *(undefined4 *)(lVar16 + 0x1c);
  *(undefined8 *)((long)param_2 + 8) = uVar5;
  *(undefined *)((long)param_2 + 0x30) = *puVar18;
switchD_00c1ff24_caseD_c1febc:
  pbVar19 = *(byte **)((long)param_2 + 0x40);
  bVar13 = *(byte *)((long)param_2 + 0x30);
  *pbVar19 = bVar13;
  uVar11 = (ulong)*(uint *)((long)param_2 + 0x4c);
  pbVar20 = pbVar19;
LAB_00c1fed0:
  uVar2 = *(ushort *)
           (&UNK_00529430 + (ulong)(byte)(&DAT_0053b1e8)[bVar13] * 2 + (long)(int)uVar11 * 0xa4);
  iVar9 = (int)(short)uVar2;
  if (0 < (short)uVar2) {
    do {
      if (*(short *)(&DAT_0053b2e8 + (ulong)uVar2 * 2) != 0) {
        *(byte **)((long)param_2 + 0x70) = pbVar20;
        *(uint *)((long)param_2 + 0x68) = (uint)uVar2;
      }
      pbVar20 = pbVar20 + 1;
      uVar2 = *(ushort *)
               (&UNK_00529430 + (ulong)(byte)(&DAT_0053b1e8)[*pbVar20] * 2 + (ulong)uVar2 * 0xa4);
      iVar9 = (int)(short)uVar2;
    } while (0 < iVar9);
  }
  uVar15 = (ulong)(uint)-iVar9;
LAB_00c1feec:
  iVar9 = (int)pbVar20;
  *(byte **)((long)param_2 + 0x80) = pbVar19;
  *(int *)((long)param_2 + 0x38) = iVar9 - (int)pbVar19;
  uVar2 = *(ushort *)(&DAT_0053b2e8 + (long)(int)uVar15 * 2);
  uVar11 = (ulong)(short)uVar2;
  *(byte *)((long)param_2 + 0x30) = *pbVar20;
  *pbVar20 = 0;
  *(byte **)((long)param_2 + 0x40) = pbVar20;
  if (0x91 < uVar2) {
LAB_00c209f0:
                    /* WARNING: Subroutine does not return */
    FUN_00c21450("fatal flex scanner internal error--no action found");
  }
LAB_00c1ff14:
  switch((ulong)(&switchD_00c1ff24::switchdataD_0052930c)[uVar11 & 0xffffffff] * 4 + 0xc1febc) {
  case 0xc1febc:
    goto switchD_00c1ff24_caseD_c1febc;
  case 0xc1ff28:
    goto switchD_00c1ff24_caseD_c1ff28;
  case 0xc20048:
    goto switchD_00c1ff24_caseD_c20048;
  case 0xc201c4:
                    /* WARNING: Load size is inaccurate */
    *(int *)(*param_2 + 0xa0) = *(int *)(*param_2 + 0xa0) + 1;
    goto switchD_00c1ff24_caseD_c1febc;
  case 0xc201d8:
    FUN_00c20d64(*(undefined8 *)((long)param_2 + 0x90),param_2);
    goto switchD_00c1ff24_caseD_c1febc;
  case 0xc201e8:
                    /* WARNING: Load size is inaccurate */
    FUN_00c20dd0(*(undefined8 *)((long)param_2 + 0x90),*param_2,param_2);
    goto switchD_00c1ff24_caseD_c1febc;
  case 0xc201fc:
    fwrite(*(void **)((long)param_2 + 0x80),(long)*(int *)((long)param_2 + 0x38),1,
           *(FILE **)((long)param_2 + 0x10));
    goto switchD_00c1ff24_caseD_c1febc;
  case 0xc20214:
                    /* WARNING: Load size is inaccurate */
    GISLParserContext::reservedWord(*param_2,*(char **)((long)param_2 + 0x80));
    return 0;
  case 0xc20228:
                    /* WARNING: Load size is inaccurate */
    puVar12 = *(undefined8 **)((long)param_2 + 0x90);
    uVar5 = *(undefined8 *)(*param_2 + 0x98);
    puVar12[1] = *(undefined8 *)(*param_2 + 0xa0);
    *puVar12 = uVar5;
    dVar22 = atof(*(char **)((long)param_2 + 0x80));
    *(float *)(*(long *)((long)param_2 + 0x90) + 0x10) = (float)dVar22;
    return 300;
  case 0xc20254:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    puVar12 = *(undefined8 **)((long)param_2 + 0x90);
    pcVar8 = "Invalid Octal number.";
LAB_00c2028c:
    uVar5 = *(undefined8 *)(lVar10 + 0x98);
    puVar12[1] = *(undefined8 *)(lVar10 + 0xa0);
    *puVar12 = uVar5;
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    GISLParserContext::error
              ((GsTSourceLoc)lVar10,*(char **)(lVar10 + 0x98),*(char **)(lVar10 + 0xa0),pcVar8,
               *(undefined8 *)((long)param_2 + 0x80),&DAT_0050a39f,&DAT_0050a39f);
    GISLParserContext::recover();
    return 0;
  case 0xc20268:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    puVar12 = *(undefined8 **)((long)param_2 + 0x90);
    pcVar8 = "Invalid Binary number.";
    goto LAB_00c2028c;
  case 0xc2027c:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    puVar12 = *(undefined8 **)((long)param_2 + 0x90);
    pcVar8 = "Invalid Quaternary number.";
    goto LAB_00c2028c;
  case 0xc202c0:
    if (*(long *)((long)param_2 + 0x28) == 0) {
      pyVar6 = (yy_buffer_state *)0x0;
    }
    else {
      pyVar6 = *(yy_buffer_state **)
                (*(long *)((long)param_2 + 0x28) + *(long *)((long)param_2 + 0x18) * 8);
    }
    gsParser__delete_buffer(pyVar6,param_2);
    return 0;
  case 0xc202d4:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x102;
    break;
  case 0xc202e0:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x103;
    break;
  case 0xc202ec:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x104;
    break;
  case 0xc202f8:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x11d;
    break;
  case 0xc20304:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x105;
    break;
  case 0xc20310:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x106;
    break;
  case 0xc2031c:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x107;
    break;
  case 0xc20328:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x108;
    break;
  case 0xc20334:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x112;
    break;
  case 0xc20340:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x113;
    break;
  case 0xc2034c:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x114;
    break;
  case 0xc20358:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x116;
    break;
  case 0xc20364:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x120;
    break;
  case 0xc20370:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x117;
    break;
  case 0xc2037c:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x115;
    break;
  case 0xc20388:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x11a;
    break;
  case 0xc20394:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x11b;
    break;
  case 0xc203a0:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x11c;
    break;
  case 0xc203ac:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x11f;
    goto LAB_00c20440;
  case 0xc203b8:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x10d;
    goto LAB_00c20440;
  case 0xc203c4:
                    /* WARNING: Load size is inaccurate */
    puVar12 = *(undefined8 **)((long)param_2 + 0x90);
    uVar5 = *(undefined8 *)(*param_2 + 0x98);
    puVar12[1] = *(undefined8 *)(*param_2 + 0xa0);
    *puVar12 = uVar5;
    *(undefined *)(*(long *)((long)param_2 + 0x90) + 0x10) = 1;
    return 0x12f;
  case 0xc203e8:
                    /* WARNING: Load size is inaccurate */
    puVar12 = *(undefined8 **)((long)param_2 + 0x90);
    uVar5 = *(undefined8 *)(*param_2 + 0x98);
    puVar12[1] = *(undefined8 *)(*param_2 + 0xa0);
    *puVar12 = uVar5;
    *(undefined *)(*(long *)((long)param_2 + 0x90) + 0x10) = 0;
    return 0x12f;
  case 0xc20408:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x118;
    break;
  case 0xc20414:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x119;
    break;
  case 0xc20420:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x128;
    goto LAB_00c20440;
  case 0xc2042c:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x126;
    goto LAB_00c20440;
  case 0xc20438:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x127;
LAB_00c20440:
    puVar12 = *(undefined8 **)((long)param_2 + 0x90);
    uVar23 = *(undefined8 *)(lVar10 + 0x98);
    puVar12[1] = *(undefined8 *)(lVar10 + 0xa0);
    *puVar12 = uVar23;
                    /* WARNING: Load size is inaccurate */
    *(undefined *)(*param_2 + 0x20) = 1;
    return uVar5;
  case 0xc2045c:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x11e;
    break;
  case 0xc20468:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x122;
    break;
  case 0xc20474:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x123;
    break;
  case 0xc20480:
                    /* WARNING: Load size is inaccurate */
    puVar12 = *(undefined8 **)((long)param_2 + 0x90);
    uVar5 = *(undefined8 *)(*param_2 + 0x98);
    puVar12[1] = *(undefined8 *)(*param_2 + 0xa0);
    *puVar12 = uVar5;
                    /* WARNING: Load size is inaccurate */
    uVar5 = SHC_String::New(*(char **)((long)param_2 + 0x80),
                            *(SHC_PoolAllocator **)(*param_2 + 0x58));
    *(undefined8 *)(*(long *)((long)param_2 + 0x90) + 0x10) = uVar5;
    return 0x15f;
  case 0xc204b4:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x129;
    break;
  case 0xc204c0:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x121;
    break;
  case 0xc204cc:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x160;
    break;
  case 0xc204d8:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x161;
    break;
  case 0xc204e4:
                    /* WARNING: Load size is inaccurate */
    puVar12 = *(undefined8 **)((long)param_2 + 0x90);
    uVar5 = *(undefined8 *)(*param_2 + 0x98);
    puVar12[1] = *(undefined8 *)(*param_2 + 0xa0);
    *puVar12 = uVar5;
                    /* WARNING: Load size is inaccurate */
    uVar5 = SHC_String::New(*(char **)((long)param_2 + 0x80),
                            *(SHC_PoolAllocator **)(*param_2 + 0x58));
    *(undefined8 *)(*(long *)((long)param_2 + 0x90) + 0x10) = uVar5;
    lVar10 = *(long *)((long)param_2 + 0x90);
                    /* WARNING: Load size is inaccurate */
    uVar5 = FUN_00c20b9c(*(undefined8 *)(lVar10 + 0x10),*param_2,lVar10 + 0x18,lVar10 + 0x20);
    return uVar5;
  case 0xc2053c:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x10;
    goto LAB_00c2055c;
  case 0xc20548:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 2;
    goto LAB_00c2055c;
  case 0xc20554:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 4;
LAB_00c2055c:
    puVar12 = *(undefined8 **)((long)param_2 + 0x90);
    uVar23 = *(undefined8 *)(lVar10 + 0x98);
    puVar12[1] = *(undefined8 *)(lVar10 + 0xa0);
    *puVar12 = uVar23;
    lVar10 = *(long *)((long)param_2 + 0x80) + 2;
LAB_00c205c8:
    uVar4 = FUN_00c20cec(lVar10,uVar5);
    *(undefined4 *)(*(long *)((long)param_2 + 0x90) + 0x10) = uVar4;
    return 0x12e;
  case 0xc20574:
                    /* WARNING: Load size is inaccurate */
    puVar12 = *(undefined8 **)((long)param_2 + 0x90);
    uVar5 = *(undefined8 *)(*param_2 + 0x98);
    puVar12[1] = *(undefined8 *)(*param_2 + 0xa0);
    *puVar12 = uVar5;
    lVar10 = *(long *)((long)param_2 + 0x80) + 1;
    goto LAB_00c205a8;
  case 0xc20590:
                    /* WARNING: Load size is inaccurate */
    puVar12 = *(undefined8 **)((long)param_2 + 0x90);
    uVar5 = *(undefined8 *)(*param_2 + 0x98);
    puVar12[1] = *(undefined8 *)(*param_2 + 0xa0);
    *puVar12 = uVar5;
    lVar10 = *(long *)((long)param_2 + 0x80) + 2;
LAB_00c205a8:
    uVar5 = 8;
    goto LAB_00c205c8;
  case 0xc205b0:
                    /* WARNING: Load size is inaccurate */
    uVar5 = 10;
    puVar12 = *(undefined8 **)((long)param_2 + 0x90);
    uVar23 = *(undefined8 *)(*param_2 + 0x98);
    puVar12[1] = *(undefined8 *)(*param_2 + 0xa0);
    *puVar12 = uVar23;
    lVar10 = *(long *)((long)param_2 + 0x80);
    goto LAB_00c205c8;
  case 0xc205e0:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x10;
    goto LAB_00c20600;
  case 0xc205ec:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 2;
    goto LAB_00c20600;
  case 0xc205f8:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 4;
LAB_00c20600:
    puVar12 = *(undefined8 **)((long)param_2 + 0x90);
    uVar23 = *(undefined8 *)(lVar10 + 0x98);
    puVar12[1] = *(undefined8 *)(lVar10 + 0xa0);
    *puVar12 = uVar23;
    lVar10 = *(long *)((long)param_2 + 0x80) + 2;
LAB_00c2066c:
    uVar4 = FUN_00c20cec(lVar10,uVar5);
    *(undefined4 *)(*(long *)((long)param_2 + 0x90) + 0x10) = uVar4;
    return 0x12d;
  case 0xc20618:
                    /* WARNING: Load size is inaccurate */
    puVar12 = *(undefined8 **)((long)param_2 + 0x90);
    uVar5 = *(undefined8 *)(*param_2 + 0x98);
    puVar12[1] = *(undefined8 *)(*param_2 + 0xa0);
    *puVar12 = uVar5;
    lVar10 = *(long *)((long)param_2 + 0x80) + 1;
    goto LAB_00c2064c;
  case 0xc20634:
                    /* WARNING: Load size is inaccurate */
    puVar12 = *(undefined8 **)((long)param_2 + 0x90);
    uVar5 = *(undefined8 *)(*param_2 + 0x98);
    puVar12[1] = *(undefined8 *)(*param_2 + 0xa0);
    *puVar12 = uVar5;
    lVar10 = *(long *)((long)param_2 + 0x80) + 2;
LAB_00c2064c:
    uVar5 = 8;
    goto LAB_00c2066c;
  case 0xc20654:
                    /* WARNING: Load size is inaccurate */
    uVar5 = 10;
    puVar12 = *(undefined8 **)((long)param_2 + 0x90);
    uVar23 = *(undefined8 *)(*param_2 + 0x98);
    puVar12[1] = *(undefined8 *)(*param_2 + 0xa0);
    *puVar12 = uVar23;
    lVar10 = *(long *)((long)param_2 + 0x80);
    goto LAB_00c2066c;
  case 0xc20684:
                    /* WARNING: Load size is inaccurate */
    puVar12 = *(undefined8 **)((long)param_2 + 0x90);
    uVar5 = *(undefined8 *)(*param_2 + 0x98);
    puVar12[1] = *(undefined8 *)(*param_2 + 0xa0);
    *puVar12 = uVar5;
                    /* WARNING: Load size is inaccurate */
    uVar5 = SHC_String::New(*(char **)((long)param_2 + 0x80),
                            *(SHC_PoolAllocator **)(*param_2 + 0x58));
    *(undefined8 *)(*(long *)((long)param_2 + 0x90) + 0x10) = uVar5;
    return 0x111;
  case 0xc206b8:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x13f;
    break;
  case 0xc206c4:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x146;
    break;
  case 0xc206d0:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x13d;
    break;
  case 0xc206dc:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x13e;
    break;
  case 0xc206e8:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x140;
    break;
  case 0xc206f4:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x141;
    break;
  case 0xc20700:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x142;
    break;
  case 0xc2070c:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x143;
    break;
  case 0xc20718:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x144;
    break;
  case 0xc20724:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x145;
    break;
  case 0xc20730:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x134;
    break;
  case 0xc2073c:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x135;
    break;
  case 0xc20748:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x13a;
    break;
  case 0xc20754:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x13b;
    break;
  case 0xc20760:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x13c;
    break;
  case 0xc2076c:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x136;
    break;
  case 0xc20778:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x137;
    break;
  case 0xc20784:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x138;
    break;
  case 0xc20790:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x139;
    break;
  case 0xc2079c:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x132;
    break;
  case 0xc207a8:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x133;
    break;
  case 0xc207b4:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x151;
    goto LAB_00c208e4;
  case 0xc207c0:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x14b;
    goto LAB_00c208e4;
  case 0xc207cc:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x14c;
    break;
  case 0xc207d8:
                    /* WARNING: Load size is inaccurate */
    puVar12 = *(undefined8 **)((long)param_2 + 0x90);
    uVar5 = *(undefined8 *)(*param_2 + 0x98);
    puVar12[1] = *(undefined8 *)(*param_2 + 0xa0);
    *puVar12 = uVar5;
                    /* WARNING: Load size is inaccurate */
    if (*(char *)(*param_2 + 0x28) != '\0') {
      *(undefined *)(*param_2 + 0x20) = 0;
      return 0x14e;
    }
    return 0x14e;
  case 0xc20800:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x14f;
    break;
  case 0xc2080c:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x150;
    goto LAB_00c208e4;
  case 0xc20818:
                    /* WARNING: Load size is inaccurate */
    puVar12 = *(undefined8 **)((long)param_2 + 0x90);
    uVar5 = *(undefined8 *)(*param_2 + 0x98);
    puVar12[1] = *(undefined8 *)(*param_2 + 0xa0);
    *puVar12 = uVar5;
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    *(undefined *)(lVar10 + 0x20) = 0;
    *(undefined *)(lVar10 + 0x28) = 1;
    return 0x147;
  case 0xc20840:
                    /* WARNING: Load size is inaccurate */
    puVar12 = *(undefined8 **)((long)param_2 + 0x90);
    uVar5 = *(undefined8 *)(*param_2 + 0x98);
    puVar12[1] = *(undefined8 *)(*param_2 + 0xa0);
    *puVar12 = uVar5;
                    /* WARNING: Load size is inaccurate */
    *(undefined *)(*param_2 + 0x28) = 0;
    return 0x148;
  case 0xc20860:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x149;
    break;
  case 0xc2086c:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x14a;
    break;
  case 0xc20878:
    *(undefined4 *)((long)param_2 + 0x4c) = 3;
    return 0x14d;
  case 0xc20888:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x152;
    break;
  case 0xc20894:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x153;
    break;
  case 0xc208a0:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x154;
    break;
  case 0xc208ac:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x155;
    break;
  case 0xc208b8:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x156;
    break;
  case 0xc208c4:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x157;
    break;
  case 0xc208d0:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x158;
    break;
  case 0xc208dc:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x159;
LAB_00c208e4:
    puVar12 = *(undefined8 **)((long)param_2 + 0x90);
    uVar23 = *(undefined8 *)(lVar10 + 0x98);
    puVar12[1] = *(undefined8 *)(lVar10 + 0xa0);
    *puVar12 = uVar23;
                    /* WARNING: Load size is inaccurate */
    *(undefined *)(*param_2 + 0x20) = 0;
    return uVar5;
  case 0xc208fc:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x15a;
    break;
  case 0xc20908:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x15b;
    break;
  case 0xc20914:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x15c;
    break;
  case 0xc20920:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x15d;
    break;
  case 0xc2092c:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x15e;
    break;
  case 0xc20938:
                    /* WARNING: Load size is inaccurate */
    lVar10 = *param_2;
    uVar5 = 0x130;
    break;
  case 0xc20968:
                    /* WARNING: Load size is inaccurate */
    *(undefined4 *)((long)param_2 + 0x4c) = 1;
    puVar12 = *(undefined8 **)((long)param_2 + 0x90);
    uVar5 = *(undefined8 *)(*param_2 + 0x98);
    puVar12[1] = *(undefined8 *)(*param_2 + 0xa0);
    *puVar12 = uVar5;
                    /* WARNING: Load size is inaccurate */
    uVar5 = SHC_String::New(*(char **)((long)param_2 + 0x80),
                            *(SHC_PoolAllocator **)(*param_2 + 0x58));
    *(undefined8 *)(*(long *)((long)param_2 + 0x90) + 0x10) = uVar5;
    return 0x131;
  case 0xc209a4:
                    /* WARNING: Load size is inaccurate */
    pGVar7 = (GsTInfoSinkBase *)
             GsTInfoSinkBase::operator<<(*(GsTInfoSinkBase **)(*param_2 + 8),"FLEX: Unknown char ");
    pGVar7 = (GsTInfoSinkBase *)GsTInfoSinkBase::operator<<(pGVar7,*(char **)((long)param_2 + 0x80))
    ;
    GsTInfoSinkBase::operator<<(pGVar7,"\n");
    return 0;
  }
  puVar12 = *(undefined8 **)((long)param_2 + 0x90);
  uVar23 = *(undefined8 *)(lVar10 + 0x98);
  puVar12[1] = *(undefined8 *)(lVar10 + 0xa0);
  *puVar12 = uVar23;
  return uVar5;
switchD_00c1ff24_caseD_c1ff28:
  uVar5 = *(undefined8 *)((long)param_2 + 0x80);
  *pbVar20 = *(byte *)((long)param_2 + 0x30);
  lVar10 = *(long *)((long)param_2 + 0x18);
  lVar14 = *(long *)((long)param_2 + 0x28);
  puVar12 = *(undefined8 **)(lVar14 + lVar10 * 8);
  if (*(int *)(puVar12 + 7) == 0) {
    iVar3 = *(int *)((long)puVar12 + 0x1c);
    *puVar12 = *(undefined8 *)((long)param_2 + 8);
    puVar12 = *(undefined8 **)(lVar14 + lVar10 * 8);
    *(int *)((long)param_2 + 0x34) = iVar3;
    *(undefined4 *)(puVar12 + 7) = 1;
  }
  else {
    iVar3 = *(int *)((long)param_2 + 0x34);
  }
  iVar21 = (int)uVar5;
  if ((ulong)(puVar12[1] + (long)iVar3) < *(ulong *)((long)param_2 + 0x40)) {
    iVar3 = FUN_00c2110c(param_2);
    if (iVar3 == 1) goto code_r0x00c1ff90;
    if (iVar3 == 2) {
      pbVar19 = *(byte **)((long)param_2 + 0x80);
      pbVar20 = (byte *)(*(long *)(*(long *)(*(long *)((long)param_2 + 0x28) +
                                            *(long *)((long)param_2 + 0x18) * 8) + 8) +
                        (long)*(int *)((long)param_2 + 0x34));
      uVar15 = (ulong)*(uint *)((long)param_2 + 0x4c);
      *(byte **)((long)param_2 + 0x40) = pbVar20;
      if (pbVar19 < pbVar20) {
        lVar10 = 0;
        do {
          uVar11 = (ulong)pbVar19[lVar10];
          if (uVar11 == 0) {
            uVar11 = 1;
          }
          else {
            uVar11 = (ulong)(byte)(&DAT_0053b1e8)[uVar11];
          }
          iVar9 = (int)uVar15;
          uVar15 = (ulong)*(short *)(&UNK_00529430 + uVar11 * 2 + (long)iVar9 * 0xa4);
          if (*(short *)(&DAT_0053b2e8 + uVar15 * 2) != 0) {
            *(int *)((long)param_2 + 0x68) =
                 (int)*(short *)(&UNK_00529430 + uVar11 * 2 + (long)iVar9 * 0xa4);
            *(byte **)((long)param_2 + 0x70) = pbVar19 + lVar10;
          }
          lVar10 = lVar10 + 1;
        } while ((long)pbVar20 - (long)pbVar19 != lVar10);
      }
      goto LAB_00c1feec;
    }
    if (iVar3 != 0) goto switchD_00c1ff24_caseD_c1febc;
    iVar9 = iVar9 - iVar21;
    pbVar19 = *(byte **)((long)param_2 + 0x80);
    lVar10 = (long)(iVar9 + -1);
    uVar11 = (ulong)*(uint *)((long)param_2 + 0x4c);
    pbVar20 = pbVar19 + lVar10;
    *(byte **)((long)param_2 + 0x40) = pbVar20;
    if (1 < iVar9) {
      lVar14 = 0;
      do {
        uVar15 = (ulong)pbVar19[lVar14];
        if (uVar15 == 0) {
          uVar15 = 1;
        }
        else {
          uVar15 = (ulong)(byte)(&DAT_0053b1e8)[uVar15];
        }
        iVar9 = (int)uVar11;
        uVar11 = (ulong)*(short *)(&UNK_00529430 + uVar15 * 2 + (long)iVar9 * 0xa4);
        if (*(short *)(&DAT_0053b2e8 + uVar11 * 2) != 0) {
          *(int *)((long)param_2 + 0x68) =
               (int)*(short *)(&UNK_00529430 + uVar15 * 2 + (long)iVar9 * 0xa4);
          *(byte **)((long)param_2 + 0x70) = pbVar19 + lVar14;
        }
        lVar14 = lVar14 + 1;
      } while (lVar10 != lVar14);
    }
    goto LAB_00c201bc;
  }
  iVar9 = iVar9 - iVar21;
  pbVar19 = *(byte **)((long)param_2 + 0x80);
  uVar15 = (ulong)*(uint *)((long)param_2 + 0x4c);
  lVar10 = (long)(iVar9 + -1);
  pbVar20 = pbVar19 + lVar10;
  *(byte **)((long)param_2 + 0x40) = pbVar20;
  pbVar17 = pbVar19;
  if (1 < iVar9) {
    do {
      if ((ulong)*pbVar17 == 0) {
        uVar11 = 1;
      }
      else {
        uVar11 = (ulong)(byte)(&DAT_0053b1e8)[*pbVar17];
      }
      iVar9 = (int)uVar15;
      uVar15 = (ulong)*(short *)(&UNK_00529430 + uVar11 * 2 + (long)iVar9 * 0xa4);
      if (*(short *)(&DAT_0053b2e8 + uVar15 * 2) != 0) {
        *(int *)((long)param_2 + 0x68) =
             (int)*(short *)(&UNK_00529430 + uVar11 * 2 + (long)iVar9 * 0xa4);
        *(byte **)((long)param_2 + 0x70) = pbVar17;
      }
      lVar10 = lVar10 + -1;
      pbVar17 = pbVar17 + 1;
    } while (lVar10 != 0);
  }
  uVar2 = *(ushort *)(&DAT_00529432 + (long)(int)uVar15 * 0xa4);
  uVar11 = (ulong)(short)uVar2;
  if (0 < (short)uVar2) goto code_r0x00c200e4;
  goto LAB_00c1feec;
code_r0x00c1ff90:
  *(undefined4 *)((long)param_2 + 0x50) = 0;
  iVar21 = *(int *)((long)param_2 + 0x4c) + -1;
  iVar3 = *(int *)((long)param_2 + 0x4c);
  if (-1 < iVar21) {
    iVar3 = iVar21;
  }
  uVar1 = (iVar3 >> 1) + 0x90;
  uVar11 = (ulong)uVar1;
  *(undefined8 *)((long)param_2 + 0x40) = *(undefined8 *)((long)param_2 + 0x80);
  if (0x91 < uVar1) goto LAB_00c209f0;
  goto LAB_00c1ff14;
code_r0x00c200e4:
  if (*(short *)(&DAT_0053b2e8 + (ulong)uVar2 * 2) != 0) {
    *(int *)((long)param_2 + 0x68) = (int)(short)uVar2;
    *(byte **)((long)param_2 + 0x70) = pbVar20;
  }
  pbVar20 = pbVar20 + 1;
  *(byte **)((long)param_2 + 0x40) = pbVar20;
LAB_00c201bc:
  bVar13 = *pbVar20;
  goto LAB_00c1fed0;
switchD_00c1ff24_caseD_c20048:
  *pbVar20 = *(byte *)((long)param_2 + 0x30);
  uVar15 = (ulong)*(uint *)((long)param_2 + 0x68);
  pbVar20 = (byte *)(*(long *)((long)param_2 + 0x70) + 1);
  goto LAB_00c1feec;
}



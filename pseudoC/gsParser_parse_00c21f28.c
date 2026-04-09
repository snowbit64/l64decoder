// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gsParser_parse
// Entry Point: 00c21f28
// Size: 24196 bytes
// Signature: undefined __cdecl gsParser_parse(void * param_1, GISLParserContext * param_2)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* gsParser_parse(void*, GISLParserContext&) */

undefined8 gsParser_parse(void *param_1,GISLParserContext *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  byte bVar3;
  short sVar4;
  char cVar5;
  FILE *pFVar6;
  bool bVar7;
  GsTOperator GVar8;
  short *psVar9;
  GISLParserUtil *pGVar10;
  SHC_String *pSVar11;
  AST_Node *pAVar12;
  long *plVar13;
  long lVar14;
  AST_AggregateNode *pAVar15;
  long **pplVar16;
  GsTFunction *this;
  undefined8 *puVar17;
  undefined8 uVar18;
  GsTSymbol *pGVar19;
  GsTBasicType GVar20;
  long *plVar21;
  AST_TypedNode *pAVar22;
  char *in_x2;
  GsTSourceLoc GVar23;
  GsTSourceLoc GVar24;
  char *pcVar25;
  undefined uVar26;
  uint uVar27;
  int iVar28;
  undefined4 *puVar29;
  byte *pbVar30;
  uint *puVar31;
  int *piVar32;
  short *psVar33;
  byte *pbVar34;
  char *pcVar35;
  SHC_Type *pSVar36;
  uint uVar37;
  short *psVar38;
  undefined8 uVar39;
  long **pplVar40;
  long *plVar41;
  long lVar42;
  IR_TypeSet *pIVar43;
  long lVar44;
  short *psVar45;
  long **pplVar46;
  long lVar47;
  ulong uVar48;
  long lVar49;
  uint uVar50;
  long lVar51;
  GsTFunction *pGVar52;
  long **pplVar53;
  int iVar54;
  long **pplVar55;
  long *plVar56;
  long lVar57;
  long *plVar58;
  long lVar59;
  long lVar60;
  long *plVar61;
  long *plVar62;
  long lVar63;
  undefined4 uVar64;
  long local_5520;
  uint local_5504;
  ulong local_5500;
  undefined8 *local_54f8;
  long **local_54f0;
  undefined8 *local_54e8;
  long **local_54e0;
  long **local_54d8;
  SHC_PoolAllocator **local_54d0;
  void *local_54c8;
  long local_54c0;
  int local_54b4;
  long **local_54b0;
  long **local_54a8;
  long **local_54a0;
  uint local_5494;
  uint local_5490 [2];
  undefined8 local_5488;
  undefined8 uStack_5480;
  long *local_5478;
  long *local_5470;
  long *plStack_5468;
  undefined8 local_5460;
  long *plStack_5458;
  long *local_5450;
  undefined8 uStack_5448;
  long *local_5440;
  undefined auStack_5438 [8];
  long *local_5430;
  long *plStack_5428;
  long *local_5420;
  long *plStack_5418;
  long *local_5410;
  long *local_5400;
  long *plStack_53f8;
  long *local_53f0;
  long *plStack_53e8;
  long *local_53e0;
  long *plStack_53d8;
  long *local_53d0;
  long *plStack_53c8;
  long *local_53c0;
  long *plStack_53b8;
  long *local_53b0;
  long *plStack_53a8;
  long *local_53a0;
  long *aplStack_5390 [2600];
  short local_250 [200];
  undefined local_c0 [8];
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  long *local_a0;
  long *plStack_98;
  long local_88;
  
  local_54c0 = tpidr_el0;
  local_88 = *(long *)(local_54c0 + 0x28);
  local_53a0 = (long *)0x0;
  plStack_53b8 = (long *)0x0;
  local_53c0 = (long *)0x0;
  plStack_53a8 = (long *)0x0;
  local_53b0 = (long *)0x0;
  plStack_53d8 = (long *)0x0;
  local_53e0 = (long *)0x0;
  plStack_53c8 = (long *)0x0;
  local_53d0 = (long *)0x0;
  plStack_53f8 = (long *)0x0;
  local_5400 = (long *)0x0;
  plStack_53e8 = (long *)0x0;
  local_53f0 = (long *)0x0;
  if (gsParser_debug != 0) {
    in_x2 = (char *)0x1;
    fwrite("Starting parse\n",0xf,1,_stderr);
  }
  local_54d8 = (long **)&uStack_5448;
  local_54d0 = (SHC_PoolAllocator **)(param_2 + 0x58);
  local_54e0 = &local_5430;
  local_54b4 = 0;
  local_54f0 = (long **)(auStack_5438 + 4);
  local_54f8 = (undefined8 *)&uStack_a8;
  uVar50 = 0;
  pplVar16 = aplStack_5390;
  uVar37 = 0xfffffffe;
  local_5504 = 0xfffffffe;
  local_5500 = (ulong)local_c0 | 1;
  psVar9 = local_250;
  local_54e8 = (undefined8 *)(local_c0 + 4);
  psVar38 = local_250;
  local_54a8 = aplStack_5390;
  local_54a0 = (long **)0xc8;
  local_54c8 = param_1;
  local_54b0 = (long **)param_2;
  if (gsParser_debug == 0) goto LAB_00c220a8;
LAB_00c2200c:
  in_x2 = (char *)(ulong)uVar50;
  fprintf(_stderr,"Entering state %d\n");
  *psVar38 = (short)uVar50;
  psVar33 = psVar9;
  pplVar53 = pplVar16;
  if (gsParser_debug != 0) {
    in_x2 = (char *)0x1;
    fwrite("Stack now",9,1,_stderr);
    for (; psVar9 <= psVar38; psVar9 = psVar9 + 1) {
      in_x2 = (char *)(long)*psVar9;
      fprintf(_stderr," %d");
    }
    fputc(10,_stderr);
  }
  do {
    pplVar16 = local_54b0;
    psVar9 = psVar33;
    if (psVar33 + (long)((long)local_54a0 + -1) <= psVar38) {
      if ((long)local_54a0 < 10000) {
        local_54a0 = (long **)((long)local_54a0 * 2);
        if (9999 < (long)local_54a0) {
          local_54a0 = (long **)0x2710;
        }
        psVar9 = (short *)malloc((long)local_54a0 * 0x6a + 0x67);
        if (psVar9 != (short *)0x0) {
          lVar44 = (long)psVar38 - (long)psVar33 >> 1;
          memcpy(psVar9,psVar33,(lVar44 + 1) * 2);
          pplVar46 = (long **)(psVar9 + (((long)local_54a0 * 2 + 0x67) / 0x68) * 0x34);
          in_x2 = (char *)((lVar44 + 1) * 0x68);
          memcpy(pplVar46,local_54a8,(size_t)in_x2);
          if (psVar33 != local_250) {
            free(psVar33);
          }
          if (gsParser_debug != 0) {
            in_x2 = (char *)local_54a0;
            fprintf(_stderr,"Stack size increased to %ld\n");
          }
          psVar38 = psVar9 + lVar44;
          if (psVar38 < psVar9 + (long)((long)local_54a0 + -1)) {
            pplVar53 = pplVar46 + lVar44 * 0xd;
            local_54a8 = pplVar46;
            goto LAB_00c221b4;
          }
          uVar39 = 1;
          psVar33 = psVar9;
          goto LAB_00c27b40;
        }
      }
      gsParser_error(local_54c8,param_2,"memory exhausted");
      uVar39 = 2;
LAB_00c27b40:
      if (uVar37 != 0xfffffffe) {
        psVar9 = psVar33;
        local_5504 = uVar37;
        if (uVar37 < 0x162) {
LAB_00c27bac:
          iVar54 = (int)(char)(&DAT_0053bb2a)[local_5504];
        }
        else {
          iVar54 = 2;
        }
        iVar28 = gsParser_debug;
        if (gsParser_debug == 0) goto joined_r0x00c27bd4;
        fprintf(_stderr,"%s ","Cleanup: discarding lookahead");
        pFVar6 = _stderr;
        pcVar35 = "token";
        if (0x62 < iVar54) {
          pcVar35 = "nterm";
        }
        fprintf(_stderr,"%s %s (",pcVar35,(&PTR_s__end_of_file__00feda40)[iVar54]);
        fputc(0x29,pFVar6);
        fputc(10,_stderr);
        psVar33 = psVar9;
      }
      iVar28 = gsParser_debug;
      psVar9 = psVar33;
      if (gsParser_debug != 0) {
        fwrite("Stack now",9,1,_stderr);
        for (; psVar33 <= psVar38; psVar33 = psVar33 + 1) {
          fprintf(_stderr," %d",(long)*psVar33);
        }
        fputc(10,_stderr);
        iVar28 = gsParser_debug;
      }
joined_r0x00c27bd4:
      for (; psVar38 != psVar9; psVar38 = psVar38 + -1) {
        if (iVar28 != 0) {
          bVar3 = (&DAT_0053db32)[*psVar38];
          fprintf(_stderr,"%s ","Cleanup: popping");
          pFVar6 = _stderr;
          pcVar35 = "token";
          if (0x62 < bVar3) {
            pcVar35 = "nterm";
          }
          fprintf(_stderr,"%s %s (",pcVar35,(&PTR_s__end_of_file__00feda40)[bVar3]);
          fputc(0x29,pFVar6);
          fputc(10,_stderr);
          iVar28 = gsParser_debug;
        }
      }
      if (psVar9 != local_250) {
        free(psVar9);
      }
      if (*(long *)(local_54c0 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar39;
    }
LAB_00c221b4:
    psVar33 = psVar9;
    if (uVar50 == 0x3b) {
      uVar39 = 0;
      uVar37 = local_5504;
      goto LAB_00c27b40;
    }
    sVar4 = (&DAT_0053b83a)[(int)uVar50];
    if (sVar4 != -0x14b) {
      if (local_5504 == 0xfffffffe) {
        if (gsParser_debug != 0) {
          in_x2 = (char *)0x1;
          fwrite("Reading a token\n",0x10,1,_stderr);
        }
        local_5504 = gsParser_lex((GSPARSER_STYPE *)&local_5400,local_54c8);
        uVar37 = local_5504;
      }
      if (0 < (int)local_5504) {
        if (local_5504 != 0x100) {
          if (local_5504 < 0x162) {
            iVar54 = (int)(char)(&DAT_0053bb2a)[local_5504];
          }
          else {
            iVar54 = 2;
          }
          if (gsParser_debug != 0) {
            fprintf(_stderr,"%s ","Next token is");
            pFVar6 = _stderr;
            in_x2 = "token";
            if (0x62 < iVar54) {
              in_x2 = "nterm";
            }
            fprintf(_stderr,"%s %s (",in_x2,(&PTR_s__end_of_file__00feda40)[iVar54]);
            fputc(0x29,pFVar6);
            fputc(10,_stderr);
            param_2 = (GISLParserContext *)local_54b0;
            uVar37 = local_5504;
          }
          goto LAB_00c222dc;
        }
        local_5504 = 0x101;
        uVar37 = 0x101;
        goto LAB_00c22568;
      }
      if (gsParser_debug != 0) {
        in_x2 = (char *)0x1;
        fwrite("Now at end of input.\n",0x15,1,_stderr);
      }
      iVar54 = 0;
      uVar37 = 0;
      local_5504 = 0;
LAB_00c222dc:
      uVar27 = iVar54 + sVar4;
      if ((0x67f < uVar27) ||
         (iVar54 != *(short *)(
                              " !\"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`ab"
                              + (ulong)uVar27 * 2 + 0x43))) goto LAB_00c22374;
      uVar50 = (uint)*(short *)(&DAT_0053c98c + (ulong)uVar27 * 2);
      if ((int)uVar50 < 1) {
        uVar27 = -uVar50;
        goto LAB_00c2238c;
      }
      iVar28 = local_54b4 + -1;
      bVar7 = local_54b4 != 0;
      local_54b4 = 0;
      if (bVar7) {
        local_54b4 = iVar28;
      }
      if (gsParser_debug != 0) {
        fprintf(_stderr,"%s ","Shifting");
        in_x2 = (char *)&local_5400;
        FUN_00c27e44(_stderr,iVar54);
        fputc(10,_stderr);
      }
      pplVar16 = pplVar53 + 0xd;
      uVar37 = 0xfffffffe;
      local_5504 = 0xfffffffe;
      pplVar53[0x14] = plStack_53c8;
      pplVar53[0x13] = local_53d0;
      pplVar53[0x16] = plStack_53b8;
      pplVar53[0x15] = local_53c0;
      pplVar53[0x18] = plStack_53a8;
      pplVar53[0x17] = local_53b0;
      pplVar53[0x10] = plStack_53e8;
      pplVar53[0xf] = local_53f0;
      pplVar53[0x12] = plStack_53d8;
      pplVar53[0x11] = local_53e0;
      pplVar53[0xe] = plStack_53f8;
      pplVar53[0xd] = local_5400;
      pplVar53[0x19] = local_53a0;
      goto LAB_00c278a4;
    }
LAB_00c22374:
    uVar27 = (uint)(byte)"xlknopqrstum"[(int)uVar50];
    if ("xlknopqrstum"[(int)uVar50] == 0) {
      if (local_5504 == 0xfffffffe) {
        iVar54 = -2;
      }
      else if (local_5504 < 0x162) {
        iVar54 = (int)(char)(&DAT_0053bb2a)[local_5504];
      }
      else {
        iVar54 = 2;
      }
      if (local_54b4 != 3) {
        if (local_54b4 == 0) {
          in_x2 = "syntax error";
          gsParser_error(local_54c8,param_2,"syntax error");
          uVar37 = local_5504;
        }
LAB_00c22568:
        while (((lVar44 = (long)(short)(&DAT_0053b83a)[(int)uVar50],
                lVar44 + 1 < 0 != SCARRY8(lVar44,1) ||
                (*(short *)(" !\"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`ab"
                           + (lVar44 + 1) * 2 + 0x43) != 1)) ||
               ((short)*(ushort *)(&DAT_0053c98c + (lVar44 + 1) * 2) < 1))) {
          if (psVar38 == psVar9) {
            uVar39 = 1;
            psVar38 = psVar9;
            uVar37 = local_5504;
            goto LAB_00c27b40;
          }
          if (gsParser_debug == 0) {
            sVar4 = psVar38[-1];
          }
          else {
            bVar3 = (&DAT_0053db32)[(int)uVar50];
            fprintf(_stderr,"%s ","Error: popping");
            pFVar6 = _stderr;
            in_x2 = "token";
            if (0x62 < bVar3) {
              in_x2 = "nterm";
            }
            fprintf(_stderr,"%s %s (",in_x2,(&PTR_s__end_of_file__00feda40)[bVar3]);
            fputc(0x29,pFVar6);
            fputc(10,_stderr);
            sVar4 = psVar38[-1];
            uVar37 = local_5504;
            if (gsParser_debug != 0) {
              in_x2 = (char *)0x1;
              fwrite("Stack now",9,1,_stderr);
              for (psVar45 = psVar9; psVar45 <= psVar38 + -1; psVar45 = psVar45 + 1) {
                in_x2 = (char *)(long)*psVar45;
                fprintf(_stderr," %d");
              }
              fputc(10,_stderr);
            }
          }
          psVar38 = psVar38 + -1;
          pplVar53 = pplVar53 + -0xd;
          uVar50 = (uint)sVar4;
        }
        uVar50 = (uint)*(ushort *)(&DAT_0053c98c + (lVar44 + 1) * 2);
        pplVar16 = pplVar53 + 0xd;
        pplVar53[0x14] = plStack_53c8;
        pplVar53[0x13] = local_53d0;
        pplVar53[0x16] = plStack_53b8;
        pplVar53[0x15] = local_53c0;
        pplVar53[0x18] = plStack_53a8;
        pplVar53[0x17] = local_53b0;
        pplVar53[0x10] = plStack_53e8;
        pplVar53[0xf] = local_53f0;
        pplVar53[0x12] = plStack_53d8;
        pplVar53[0x11] = local_53e0;
        pplVar53[0xe] = plStack_53f8;
        pplVar53[0xd] = local_5400;
        pplVar53[0x19] = local_53a0;
        if (gsParser_debug != 0) {
          fprintf(_stderr,"%s ","Shifting");
          in_x2 = (char *)pplVar16;
          FUN_00c27e44(_stderr,(&DAT_0053db32)[uVar50]);
          fputc(10,_stderr);
          uVar37 = local_5504;
        }
        local_54b4 = 3;
        goto LAB_00c278a4;
      }
      if (0 < (int)local_5504) {
        if (gsParser_debug != 0) {
          fprintf(_stderr,"%s ","Error: discarding");
          pFVar6 = _stderr;
          in_x2 = "token";
          if (0x62 < iVar54) {
            in_x2 = "nterm";
          }
          fprintf(_stderr,"%s %s (",in_x2,(&PTR_s__end_of_file__00feda40)[iVar54]);
          fputc(0x29,pFVar6);
          fputc(10,_stderr);
        }
        local_5504 = 0xfffffffe;
        uVar37 = 0xfffffffe;
        goto LAB_00c22568;
      }
      if (local_5504 != 0) goto LAB_00c22568;
      uVar39 = 1;
      goto LAB_00c27bac;
    }
LAB_00c2238c:
    local_5520 = (long)(int)uVar27;
    bVar3 = (&DAT_0053d804)[local_5520];
    lVar44 = (long)(char)bVar3;
    plStack_5468 = pplVar53[lVar44 * -0xd + 0xe];
    local_5470 = pplVar53[lVar44 * -0xd + 0xd];
    plStack_5458 = pplVar53[lVar44 * -0xd + 0x10];
    local_5460 = pplVar53[lVar44 * -0xd + 0xf];
    plStack_5428 = pplVar53[lVar44 * -0xd + 0x16];
    local_5430 = pplVar53[lVar44 * -0xd + 0x15];
    plStack_5418 = pplVar53[lVar44 * -0xd + 0x18];
    local_5420 = pplVar53[lVar44 * -0xd + 0x17];
    local_5410 = pplVar53[lVar44 * -0xd + 0x19];
    uStack_5448 = pplVar53[lVar44 * -0xd + 0x12];
    local_5450 = pplVar53[lVar44 * -0xd + 0x11];
    auStack_5438 = (undefined  [8])pplVar53[lVar44 * -0xd + 0x14];
    local_5440 = pplVar53[lVar44 * -0xd + 0x13];
    if (gsParser_debug != 0) {
      in_x2 = (char *)(ulong)(uVar27 - 1);
      fprintf(_stderr,"Reducing stack by rule %d (line %d):\n",in_x2,
              (long)*(short *)(&DAT_0053dcaa + local_5520 * 2));
      uVar37 = local_5504;
      if ('\0' < (char)bVar3) {
        uVar48 = 0;
        do {
          uVar1 = uVar48 + 1;
          fprintf(_stderr,"   $%d = ",uVar1 & 0xffffffff);
          pFVar6 = _stderr;
          in_x2 = "token";
          if (0x62 < (ulong)(byte)(&DAT_0053db32)[psVar38[(uVar48 + 1) - (ulong)bVar3]]) {
            in_x2 = "nterm";
          }
          fprintf(_stderr,"%s %s (",in_x2,
                  (&PTR_s__end_of_file__00feda40)
                  [(byte)(&DAT_0053db32)[psVar38[(uVar48 + 1) - (ulong)bVar3]]]);
          fputc(0x29,pFVar6);
          fputc(10,_stderr);
          uVar48 = uVar1;
        } while (bVar3 != uVar1);
      }
    }
    cVar5 = (char)&stack0xffffffffffffffa0;
    GVar23 = (GsTSourceLoc)local_54b0;
    param_2 = (GISLParserContext *)local_54b0;
    switch(uVar27) {
    case 2:
      plVar41 = pplVar53[3];
      if (plVar41 == (long *)0x0) {
        plVar41 = pplVar53[2];
        pSVar36 = (SHC_Type *)plVar41[2];
        if (((byte)*(SHC_Type *)plVar41 & 1) == 0) {
          pSVar36 = (SHC_Type *)((long)plVar41 + 1);
        }
        GISLParserContext::error
                  (GVar23,(char *)*pplVar53,(char *)pplVar53[1],"undeclared identifier",pSVar36,
                   &DAT_0050a39f);
        GISLParserContext::recover();
        plVar41 = (long *)SHC_PoolAllocator::allocate((SHC_PoolAllocator *)local_54b0[0xb],0x98);
        plVar21 = pplVar53[2];
        pIVar43 = (IR_TypeSet *)*local_54b0[0xb];
        local_54e8[1] = 0;
        local_54e8[2] = 0;
        *local_54e8 = 0;
        lVar14 = IR_TypeSet::getScalarType(pIVar43,3);
        plVar41[2] = 0;
        plVar41[4] = 0;
        plVar41[5] = (long)pIVar43;
        *(undefined4 *)(plVar41 + 7) = 0;
        plVar41[6] = lVar14;
        *(undefined2 *)(plVar41 + 0xb) = 0;
        *plVar41 = (long)&PTR__GsTSymbol_00fee830;
        plVar41[1] = (long)plVar21;
        *(ulong *)((long)plVar41 + 0x44) = CONCAT44(uStack_b4,uStack_b8);
        *(undefined (*) [8])((long)plVar41 + 0x3c) = local_c0;
        plVar41[10] = CONCAT44(uStack_a8,uStack_ac);
        plVar41[9] = CONCAT44(uStack_b0,uStack_b4);
        GsTSymbolTable::insert((GsTSymbolTable *)*local_54b0,(GsTSymbol *)plVar41);
      }
      else {
        uVar48 = (**(code **)(*plVar41 + 0x20))(plVar41);
        if ((uVar48 & 1) == 0) {
          plVar21 = pplVar53[2];
          pSVar36 = (SHC_Type *)plVar21[2];
          if (((byte)*(SHC_Type *)plVar21 & 1) == 0) {
            pSVar36 = (SHC_Type *)((long)plVar21 + 1);
          }
          GISLParserContext::error
                    (GVar23,(char *)*pplVar53,(char *)pplVar53[1],"variable expected",pSVar36,
                     &DAT_0050a39f);
          GISLParserContext::recover();
        }
      }
      if (((*(byte *)(plVar41 + 7) >> 1 & 1) == 0) || (plVar41[4] == 0)) {
        in_x2 = (char *)pplVar53[1];
        plStack_5458 = (long *)GISLParserUtil::ir_add_symbol
                                         ((GISLParserUtil *)plVar41,(GsTVariable *)*pplVar53,
                                          (GsTSourceLoc)in_x2,(GISLParserContext *)local_54b0);
        uVar37 = local_5504;
      }
      else {
        in_x2 = (char *)pplVar53[1];
        plVar21 = (long *)GISLParserUtil::ir_add_constant
                                    ((GISLParserUtil *)(plVar41 + 5),(SHC_Type *)*pplVar53,
                                     (GsTSourceLoc)in_x2,(GISLParserContext *)local_54b0);
        plVar41 = (long *)plVar41[4];
        if (plVar21 != plVar41) {
          in_x2 = (char *)plVar41[10];
          std::__ndk1::vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
          ::assign<AST_ConstantNode::Value*>
                    ((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                      *)(plVar21 + 9),(Value *)plVar41[9],(Value *)in_x2);
        }
        plStack_5458 = plVar21;
        uVar37 = local_5504;
      }
      break;
    case 3:
    case 9:
    case 0xb:
    case 0x1c:
    case 0x26:
    case 0x2a:
    case 0x2d:
    case 0x30:
    case 0x35:
    case 0x38:
    case 0x3a:
    case 0x3c:
    case 0x3e:
    case 0x40:
    case 0x42:
    case 0x44:
    case 0x46:
    case 0x53:
    case 0x7b:
    case 0xa5:
    case 0xa6:
    case 0xa7:
    case 0xa8:
    case 0xa9:
    case 0xaa:
    case 0xab:
    case 0xac:
    case 0xad:
    case 0xae:
    case 0xb3:
    case 0xb4:
    case 0xca:
    case 0xcb:
    case 0xcc:
    case 0xd7:
    case 0xd8:
switchD_00c22408_caseD_3:
      plStack_5458 = pplVar53[3];
      goto LAB_00c22410;
    case 4:
      local_c0 = (undefined  [8])*local_54b0[0xb];
      uStack_b0 = 2;
      local_54f8[1] = 0;
      local_54f8[2] = 0;
      *local_54f8 = 0;
      uVar39 = IR_TypeSet::getScalarType((IR_TypeSet *)local_c0,6);
      in_x2 = (char *)pplVar53[1];
      uStack_b8 = (undefined4)uVar39;
      uStack_b4 = (undefined4)((ulong)uVar39 >> 0x20);
      plVar41 = (long *)GISLParserUtil::ir_add_constant
                                  ((GISLParserUtil *)local_c0,(SHC_Type *)*pplVar53,
                                   (GsTSourceLoc)in_x2,(GISLParserContext *)local_54b0);
      uVar2 = *(undefined4 *)(pplVar53 + 2);
      plVar21 = plVar41 + 9;
      puVar29 = (undefined4 *)*plVar21;
      if ((undefined4 *)plVar41[10] == puVar29) {
        std::__ndk1::vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
        __append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>> *)
                 plVar21,1);
        puVar29 = (undefined4 *)*plVar21;
      }
      uVar64 = 6;
      puVar29[1] = uVar2;
      goto LAB_00c23b58;
    case 5:
      local_c0 = (undefined  [8])*local_54b0[0xb];
      uStack_b0 = 2;
      local_54f8[1] = 0;
      local_54f8[2] = 0;
      *local_54f8 = 0;
      uVar39 = IR_TypeSet::getScalarType((IR_TypeSet *)local_c0,5);
      in_x2 = (char *)pplVar53[1];
      uStack_b8 = (undefined4)uVar39;
      uStack_b4 = (undefined4)((ulong)uVar39 >> 0x20);
      plVar41 = (long *)GISLParserUtil::ir_add_constant
                                  ((GISLParserUtil *)local_c0,(SHC_Type *)*pplVar53,
                                   (GsTSourceLoc)in_x2,(GISLParserContext *)local_54b0);
      uVar64 = *(undefined4 *)(pplVar53 + 2);
      plVar21 = plVar41 + 9;
      puVar29 = (undefined4 *)*plVar21;
      if ((undefined4 *)plVar41[10] == puVar29) {
        std::__ndk1::vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
        __append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>> *)
                 plVar21,1);
        puVar29 = (undefined4 *)*plVar21;
      }
      puVar29[1] = uVar64;
      uVar64 = 5;
      goto LAB_00c23b58;
    case 6:
      local_c0 = (undefined  [8])*local_54b0[0xb];
      uStack_b0 = 2;
      local_54f8[1] = 0;
      local_54f8[2] = 0;
      *local_54f8 = 0;
      uVar39 = IR_TypeSet::getScalarType((IR_TypeSet *)local_c0,3);
      in_x2 = (char *)pplVar53[1];
      uStack_b8 = (undefined4)uVar39;
      uStack_b4 = (undefined4)((ulong)uVar39 >> 0x20);
      plVar41 = (long *)GISLParserUtil::ir_add_constant
                                  ((GISLParserUtil *)local_c0,(SHC_Type *)*pplVar53,
                                   (GsTSourceLoc)in_x2,(GISLParserContext *)local_54b0);
      uVar64 = *(undefined4 *)(pplVar53 + 2);
      plVar21 = plVar41 + 9;
      puVar29 = (undefined4 *)*plVar21;
      if ((undefined4 *)plVar41[10] == puVar29) {
        std::__ndk1::vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
        __append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>> *)
                 plVar21,1);
        puVar29 = (undefined4 *)*plVar21;
      }
      puVar29[1] = uVar64;
      *puVar29 = 3;
      goto LAB_00c23b5c;
    case 7:
      local_c0 = (undefined  [8])*local_54b0[0xb];
      uStack_b0 = 2;
      local_54f8[1] = 0;
      local_54f8[2] = 0;
      *local_54f8 = 0;
      uVar39 = IR_TypeSet::getScalarType((IR_TypeSet *)local_c0,9);
      in_x2 = (char *)pplVar53[1];
      uStack_b8 = (undefined4)uVar39;
      uStack_b4 = (undefined4)((ulong)uVar39 >> 0x20);
      plVar41 = (long *)GISLParserUtil::ir_add_constant
                                  ((GISLParserUtil *)local_c0,(SHC_Type *)*pplVar53,
                                   (GsTSourceLoc)in_x2,(GISLParserContext *)local_54b0);
      uVar26 = *(undefined *)(pplVar53 + 2);
      plVar21 = plVar41 + 9;
      puVar29 = (undefined4 *)*plVar21;
      if ((undefined4 *)plVar41[10] == puVar29) {
        std::__ndk1::vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
        __append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>> *)
                 plVar21,1);
        puVar29 = (undefined4 *)*plVar21;
      }
      *(undefined *)(puVar29 + 1) = uVar26;
      uVar64 = 9;
LAB_00c23b58:
      *puVar29 = uVar64;
LAB_00c23b5c:
      plStack_5458 = plVar41;
      uVar37 = local_5504;
      break;
    case 8:
    case 0x58:
    case 0xbe:
    case 0xdc:
switchD_00c22408_caseD_8:
      plStack_5458 = pplVar53[-10];
      goto LAB_00c22410;
    case 10:
      pplVar16 = pplVar53 + -0x24;
      plVar41 = *pplVar16;
      if (plVar41 == (long *)0x0) {
        plVar41 = pplVar53[-0x1a];
        in_x2 = (char *)pplVar53[-0x19];
        pcVar35 = " left of \'[\' is null ";
        pcVar25 = "expression";
LAB_00c26f7c:
        GISLParserContext::error(GVar23,(char *)plVar41,in_x2,pcVar35,pcVar25,&DAT_0050a39f);
LAB_00c26f94:
        psVar38 = psVar38 + -lVar44;
        if (gsParser_debug != 0) {
          FUN_00c27dcc(psVar9,psVar38);
        }
        uVar50 = (uint)*psVar38;
        pplVar53 = pplVar53 + lVar44 * -0xd;
        uVar37 = local_5504;
        goto LAB_00c22568;
      }
      if ((4 < *(uint *)plVar41[4]) || ((1 << (ulong)(*(uint *)plVar41[4] & 0x1f) & 0x16U) == 0)) {
        lVar14 = (**(code **)(*plVar41 + 0x48))(plVar41);
        if (lVar14 == 0) {
          plVar41 = pplVar53[-0x1a];
          plVar21 = pplVar53[-0x19];
          pcVar35 = "expression";
        }
        else {
          plVar41 = pplVar53[-0x1a];
          plVar21 = pplVar53[-0x19];
          lVar14 = (**(code **)(**pplVar16 + 0x48))();
          pbVar34 = *(byte **)(lVar14 + 0x50);
          pcVar35 = *(char **)(pbVar34 + 0x10);
          if ((*pbVar34 & 1) == 0) {
            pcVar35 = (char *)(pbVar34 + 1);
          }
        }
        GISLParserContext::error
                  (GVar23,(char *)plVar41,(char *)plVar21,
                   " left of \'[\' is not of type array, matrix, or vector ",pcVar35,&DAT_0050a39f);
        GISLParserContext::recover();
        plVar41 = *pplVar16;
      }
      in_x2 = (char *)pplVar53[-10];
      if ((*(byte *)((long)in_x2 + 0x28) >> 1 & 1) == 0) {
        plVar21 = pplVar53[-0x1a];
        GVar23 = (GsTSourceLoc)pplVar53[-0x19];
        pGVar10 = (GISLParserUtil *)0x50;
LAB_00c275c8:
        plStack_5458 = (long *)GISLParserUtil::ir_add_index
                                         (pGVar10,(GsTOperator)plVar41,(AST_TypedNode *)in_x2,
                                          (AST_TypedNode *)plVar21,GVar23,
                                          (GISLParserContext *)local_54b0);
      }
      else {
        piVar32 = (int *)plVar41[4];
        iVar54 = *piVar32;
        if (iVar54 != 1) {
LAB_00c274f8:
          if (iVar54 == 2) {
            uVar50 = piVar32[5];
            lVar14 = (**(code **)(*pplVar53[-10] + 0x28))();
            if (uVar50 <= *(uint *)(*(long *)(lVar14 + 0x48) + 4)) {
              pcVar35 = "matrix row selection out of range \'%u\'";
              goto LAB_00c275f0;
            }
            plVar41 = *pplVar16;
            piVar32 = (int *)plVar41[4];
            iVar54 = *piVar32;
          }
          if ((iVar54 == 4) && (piVar32[4] == 0)) {
            lVar14 = (**(code **)(*pplVar53[-10] + 0x28))();
            plVar41 = *pplVar16;
            if (*(uint *)(plVar41[4] + 0x10) <= *(uint *)(*(long *)(lVar14 + 0x48) + 4)) {
              plVar41 = pplVar53[-0x1a];
              plVar21 = pplVar53[-0x19];
              lVar14 = (**(code **)(*pplVar53[-10] + 0x28))();
              GISLParserContext::error
                        (GVar23,(char *)plVar41,(char *)plVar21,"",&DAT_004cfc17,
                         "array index out of range \'%u\'",
                         (ulong)*(uint *)(*(long *)(lVar14 + 0x48) + 4));
              GISLParserContext::recover();
              plVar41 = *pplVar16;
            }
          }
          plVar21 = pplVar53[-0x1a];
          GVar23 = (GsTSourceLoc)pplVar53[-0x19];
          pGVar10 = (GISLParserUtil *)0x4f;
          in_x2 = (char *)pplVar53[-10];
          goto LAB_00c275c8;
        }
        uVar50 = piVar32[5];
        lVar14 = (*(code *)(*(long **)in_x2)[5])(in_x2);
        if (*(uint *)(*(long *)(lVar14 + 0x48) + 4) < uVar50) {
          plVar41 = *pplVar16;
          piVar32 = (int *)plVar41[4];
          iVar54 = *piVar32;
          goto LAB_00c274f8;
        }
        pcVar35 = "vector field selection out of range \'%u\'";
LAB_00c275f0:
        plVar41 = pplVar53[-0x1a];
        in_x2 = (char *)pplVar53[-0x19];
        lVar14 = (**(code **)(*pplVar53[-10] + 0x28))();
        GISLParserContext::error
                  (GVar23,(char *)plVar41,in_x2,"",&DAT_004cfc17,pcVar35,
                   (ulong)*(uint *)(*(long *)(lVar14 + 0x48) + 4));
        GISLParserContext::recover();
      }
      plVar41 = plStack_5458;
      if (plStack_5458 == (long *)0x0) {
        local_c0 = (undefined  [8])*local_54b0[0xb];
        uStack_b0 = 2;
        local_54f8[1] = 0;
        local_54f8[2] = 0;
        *local_54f8 = 0;
        uVar39 = IR_TypeSet::getScalarType((IR_TypeSet *)local_c0,3);
        in_x2 = (char *)pplVar53[-0x19];
        uStack_b8 = (undefined4)uVar39;
        uStack_b4 = (undefined4)((ulong)uVar39 >> 0x20);
        plVar41 = (long *)GISLParserUtil::ir_add_constant
                                    ((GISLParserUtil *)local_c0,(SHC_Type *)pplVar53[-0x1a],
                                     (GsTSourceLoc)in_x2,(GISLParserContext *)local_54b0);
        plVar21 = plVar41 + 9;
        puVar17 = (undefined8 *)*plVar21;
        if ((undefined8 *)plVar41[10] == puVar17) {
          std::__ndk1::vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
          ::__append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                      *)plVar21,1);
          puVar17 = (undefined8 *)*plVar21;
        }
        *puVar17 = 3;
        plStack_5458 = plVar41;
        uVar37 = local_5504;
      }
      else {
        plVar21 = *pplVar16;
        piVar32 = (int *)plVar21[4];
        iVar54 = *piVar32;
        if (iVar54 == 1) {
          GVar20 = piVar32[2];
          uVar64 = *(undefined4 *)(plVar21 + 5);
          pIVar43 = *(IR_TypeSet **)*local_54d0;
          local_54e8[1] = 0;
          local_54e8[2] = 0;
          *local_54e8 = 0;
          lVar14 = IR_TypeSet::getScalarType(pIVar43,GVar20);
        }
        else {
          if (iVar54 != 2) {
            if (iVar54 == 4) {
              lVar14 = plVar21[7];
              lVar51 = plVar21[6];
              lVar47 = plVar21[5];
              lVar49 = plVar21[4];
              lVar42 = plVar21[3];
              plStack_5458[8] = plVar21[8];
              plStack_5458[7] = lVar14;
              plStack_5458[6] = lVar51;
              plStack_5458[5] = lVar47;
              plStack_5458[4] = lVar49;
              plStack_5458[3] = lVar42;
              uVar37 = local_5504;
              if (*(int *)plStack_5458[4] == 4) {
                lVar14 = *(long *)((int *)plStack_5458[4] + 2);
                plStack_5458[8] = 0;
                plStack_5458[4] = lVar14;
              }
            }
            else {
              lVar14 = plVar21[7];
              lVar51 = plVar21[6];
              lVar47 = plVar21[5];
              lVar49 = plVar21[4];
              lVar42 = plVar21[3];
              plStack_5458[8] = plVar21[8];
              plStack_5458[7] = lVar14;
              plStack_5458[6] = lVar51;
              plStack_5458[5] = lVar47;
              plStack_5458[4] = lVar49;
              plStack_5458[3] = lVar42;
              uVar37 = local_5504;
            }
            break;
          }
          GVar20 = piVar32[2];
          uVar50 = piVar32[4];
          in_x2 = (char *)(ulong)uVar50;
          uVar64 = *(undefined4 *)(plVar21 + 5);
          pIVar43 = *(IR_TypeSet **)*local_54d0;
          local_54e8[1] = 0;
          local_54e8[2] = 0;
          *local_54e8 = 0;
          lVar14 = IR_TypeSet::getVectorType(pIVar43,GVar20,uVar50);
        }
        plVar41[3] = (long)pIVar43;
        plVar41[4] = lVar14;
        *(undefined4 *)(plVar41 + 5) = uVar64;
        *(ulong *)((long)plVar41 + 0x34) = CONCAT44(uStack_b4,uStack_b8);
        *(undefined (*) [8])((long)plVar41 + 0x2c) = local_c0;
        plVar41[8] = CONCAT44(uStack_a8,uStack_ac);
        plVar41[7] = CONCAT44(uStack_b0,uStack_b4);
        uVar37 = local_5504;
      }
      break;
    case 0xc:
      plVar41 = pplVar53[-0x17];
      if (plVar41 == (long *)0x0) {
        plVar41 = *pplVar53;
        in_x2 = (char *)pplVar53[1];
        pcVar35 = "field selection on null object";
        pcVar25 = ".";
        goto LAB_00c26f7c;
      }
      if (*(int *)plVar41[4] == 6) {
        plVar41 = (long *)GISLParserUtil::ir_add_unary_math
                                    ((GISLParserUtil *)0x9,(GsTOperator)plVar41,
                                     (AST_Node *)pplVar53[-0xd],(GsTSourceLoc)pplVar53[-0xc],
                                     (GISLParserContext *)local_54b0);
      }
      in_x2 = (char *)pplVar53[-0xc];
      plStack_5458 = (long *)GISLParserUtil::ir_add_dot_operation
                                       ((AST_TypedNode *)plVar41,(GsTSourceLoc)pplVar53[-0xd],
                                        (SHC_String *)in_x2,(GsTSourceLoc)pplVar53[2],
                                        (GISLParserContext *)*pplVar53);
      uVar37 = local_5504;
      break;
    case 0xd:
      uVar48 = GISLParserContext::lValueErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)pplVar53,"++",
                          (AST_TypedNode *)pplVar53[-10]);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      in_x2 = (char *)*pplVar53;
      plStack_5458 = (long *)GISLParserUtil::ir_add_unary_math
                                       ((GISLParserUtil *)0xb,(GsTOperator)pplVar53[-10],
                                        (AST_Node *)in_x2,(GsTSourceLoc)pplVar53[1],
                                        (GISLParserContext *)local_54b0);
      uVar37 = local_5504;
      if (plStack_5458 == (long *)0x0) {
        in_x2 = &DAT_004c88d5;
LAB_00c25df8:
        GISLParserContext::unaryOpError
                  ((GsTSourceLoc *)local_54b0,(char *)pplVar53,(SHC_Type *)in_x2);
        GISLParserContext::recover();
        uVar37 = local_5504;
        goto switchD_00c22408_caseD_8;
      }
      break;
    case 0xe:
      uVar48 = GISLParserContext::lValueErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)pplVar53,"--",
                          (AST_TypedNode *)pplVar53[-10]);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      in_x2 = (char *)*pplVar53;
      plStack_5458 = (long *)GISLParserUtil::ir_add_unary_math
                                       ((GISLParserUtil *)0xc,(GsTOperator)pplVar53[-10],
                                        (AST_Node *)in_x2,(GsTSourceLoc)pplVar53[1],
                                        (GISLParserContext *)local_54b0);
      uVar37 = local_5504;
      if (plStack_5458 == (long *)0x0) {
        in_x2 = &DAT_0050e565;
        goto LAB_00c25df8;
      }
      break;
    case 0xf:
      uVar48 = GISLParserContext::scalarErrorCheck
                         ((GISLParserContext *)local_54b0,(AST_TypedNode *)pplVar53[3],"[]");
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      local_c0 = (undefined  [8])*local_54b0[0xb];
      uStack_b0 = 0;
      local_54f8[1] = 0;
      local_54f8[2] = 0;
      *local_54f8 = 0;
      uVar39 = IR_TypeSet::getScalarType((IR_TypeSet *)local_c0,6);
      uStack_b8 = (undefined4)uVar39;
      uStack_b4 = (undefined4)((ulong)uVar39 >> 0x20);
      in_x2 = (char *)0x5c;
      plStack_5458 = (long *)GISLParserContext::constructBuiltIn
                                       ((SHC_Type *)local_54b0,(int)&stack0xffffffffffffffa0 - 0x60,
                                        (AST_Node *)0x5c,(GsTSourceLoc)pplVar53[3],
                                        SUB81(pplVar53[3][1],0));
      uVar37 = local_5504;
      if (plStack_5458 == (long *)0x0) {
        in_x2 = (char *)pplVar53[3][2];
        GISLParserContext::error
                  (GVar23,(char *)pplVar53[3][1],in_x2,"cannot convert to index",&DAT_00513212,
                   &DAT_0050a39f);
        GISLParserContext::recover();
        plStack_5458 = pplVar53[3];
LAB_00c27034:
        uVar37 = local_5504;
      }
      break;
    case 0x10:
      plVar41 = pplVar53[5];
      uVar50 = *(uint *)(plVar41 + 0x12);
      if (uVar50 == 0) {
        local_5488 = (long *)0x0;
        plVar21 = (long *)GISLParserContext::findFunction
                                    ((GISLParserContext *)local_54b0,(GsTSourceLoc *)pplVar53,
                                     (GsTFunction *)plVar41,(bool *)&local_5494,
                                     (IR_Type **)&local_5488);
        local_c0 = (undefined  [8])*local_54b0[0xb];
        uStack_b0 = 2;
        local_54f8[1] = 0;
        local_54f8[2] = 0;
        *local_54f8 = 0;
        uVar39 = IR_TypeSet::getScalarType((IR_TypeSet *)local_c0,3);
        uStack_b8 = (undefined4)uVar39;
        uStack_b4 = (undefined4)((ulong)uVar39 >> 0x20);
        if (plVar21 == (long *)0x0) {
LAB_00c27934:
          in_x2 = (char *)pplVar53[1];
          plVar21 = (long *)GISLParserUtil::ir_add_constant
                                      ((GISLParserUtil *)local_c0,(SHC_Type *)*pplVar53,
                                       (GsTSourceLoc)in_x2,(GISLParserContext *)local_54b0);
          uVar50 = *(uint *)(CONCAT44(uStack_b4,uStack_b8) + 8);
          switch(uVar50) {
          case 3:
          case 4:
            if ((int)((ulong)(plVar21[10] - plVar21[9]) >> 3) != 0) {
              in_x2 = (char *)(ulong)uVar50;
              AST_ConstantNode::setValueFloat((AST_ConstantNode *)plVar21,0,0.0,uVar50);
              if ((plVar21[10] - plVar21[9] & 0x7fffffff0U) != 0) {
                uVar50 = 1;
                do {
                  uVar37 = *(uint *)(CONCAT44(uStack_b4,uStack_b8) + 8);
                  in_x2 = (char *)(ulong)uVar37;
                  AST_ConstantNode::setValueFloat((AST_ConstantNode *)plVar21,uVar50,0.0,uVar37);
                  uVar50 = uVar50 + 1;
                } while (uVar50 < (uint)((ulong)(plVar21[10] - plVar21[9]) >> 3));
              }
            }
            break;
          case 5:
          case 7:
            if ((int)((ulong)(plVar21[10] - plVar21[9]) >> 3) != 0) {
              in_x2 = (char *)0x0;
              AST_ConstantNode::setValueInt((AST_ConstantNode *)plVar21,0,0,uVar50);
              if ((plVar21[10] - plVar21[9] & 0x7fffffff0U) != 0) {
                uVar50 = 1;
                do {
                  in_x2 = (char *)0x0;
                  AST_ConstantNode::setValueInt
                            ((AST_ConstantNode *)plVar21,uVar50,0,
                             *(GsTBasicType *)(CONCAT44(uStack_b4,uStack_b8) + 8));
                  uVar50 = uVar50 + 1;
                } while (uVar50 < (uint)((ulong)(plVar21[10] - plVar21[9]) >> 3));
              }
            }
            break;
          case 6:
          case 8:
            if ((int)((ulong)(plVar21[10] - plVar21[9]) >> 3) != 0) {
              in_x2 = (char *)0x0;
              AST_ConstantNode::setValueUint((AST_ConstantNode *)plVar21,0,0,uVar50);
              if ((plVar21[10] - plVar21[9] & 0x7fffffff0U) != 0) {
                uVar50 = 1;
                do {
                  in_x2 = (char *)0x0;
                  AST_ConstantNode::setValueUint
                            ((AST_ConstantNode *)plVar21,uVar50,0,
                             *(GsTBasicType *)(CONCAT44(uStack_b4,uStack_b8) + 8));
                  uVar50 = uVar50 + 1;
                } while (uVar50 < (uint)((ulong)(plVar21[10] - plVar21[9]) >> 3));
              }
            }
            break;
          case 9:
            if ((int)((ulong)(plVar21[10] - plVar21[9]) >> 3) != 0) {
              uVar50 = 0;
              do {
                in_x2 = (char *)0x0;
                AST_ConstantNode::setValueBool((AST_ConstantNode *)plVar21,uVar50,false);
                uVar50 = uVar50 + 1;
              } while (uVar50 < (uint)((ulong)(plVar21[10] - plVar21[9]) >> 3));
            }
          }
          plStack_5458 = plVar21;
          GISLParserContext::recover();
        }
        else {
          uVar39 = (**(code **)(*plVar21 + 0x10))(plVar21);
          uVar18 = (**(code **)(*plVar41 + 0x10))(plVar41);
          uVar48 = FUN_00c27ec8(uVar39,uVar18);
          if ((uVar48 & 1) == 0) {
            plVar56 = pplVar53[3];
          }
          else {
            plVar56 = (long *)GISLParserContext::promoteFunctionArguments
                                        ((GISLParserContext *)local_54b0,(AST_Node *)pplVar53[3],
                                         (GsTFunction *)plVar21,local_5490,(IR_Type *)local_5488);
            if (plVar56 == (long *)0x0) {
              pbVar30 = (byte *)plVar21[1];
              pbVar34 = *(byte **)(pbVar30 + 0x10);
              if ((*pbVar30 & 1) == 0) {
                pbVar34 = pbVar30 + 1;
              }
              GISLParserContext::error
                        (GVar23,(char *)pplVar53[3][1],(char *)pplVar53[3][2],
                         " unable to suitably promote arguments to function",pbVar34,
                         "(parameter %u)",(ulong)(local_5490[0] + 1));
              uStack_b8 = (undefined4)plVar21[9];
              uStack_b4 = (undefined4)((ulong)plVar21[9] >> 0x20);
              local_c0 = (undefined  [8])plVar21[8];
              uStack_a8 = (undefined4)plVar21[0xb];
              uStack_a4 = (undefined4)((ulong)plVar21[0xb] >> 0x20);
              uStack_ac = (uint)((ulong)plVar21[10] >> 0x20);
              uStack_b0 = 2;
              plStack_98 = (long *)plVar21[0xd];
              local_a0 = (long *)plVar21[0xc];
              goto LAB_00c27934;
            }
            pplVar53[3] = plVar56;
          }
          in_x2 = (char *)*pplVar53;
          if ((*(uint *)(plVar21 + 0x12) == 0) || ((char)local_5494 == '\0')) {
            plStack_5458 = (long *)GISLParserUtil::ir_set_aggregate_op
                                             ((GISLParserUtil *)plVar56,(AST_Node *)0x3,
                                              (GsTOperator)in_x2,(GsTSourceLoc)pplVar53[1],
                                              (GISLParserContext *)local_54b0);
            lVar14 = plVar21[8];
            lVar49 = plVar21[0xb];
            lVar42 = plVar21[10];
            lVar51 = plVar21[0xd];
            lVar47 = plVar21[0xc];
            plStack_5458[4] = plVar21[9];
            plStack_5458[3] = lVar14;
            plStack_5458[6] = lVar49;
            plStack_5458[5] = lVar42;
            plStack_5458[8] = lVar51;
            plStack_5458[7] = lVar47;
            lVar14 = (**(code **)(*plStack_5458 + 0x30))();
            pbVar30 = (byte *)(**(code **)(*plVar21 + 0x10))(plVar21);
            pbVar34 = *(byte **)(pbVar30 + 0x10);
            if ((*pbVar30 & 1) == 0) {
              pbVar34 = pbVar30 + 1;
            }
            uVar39 = SHC_String::New((char *)pbVar34,(SHC_PoolAllocator *)local_54b0[0xb]);
            *(undefined8 *)(lVar14 + 0x70) = uVar39;
            lVar14 = (**(code **)(*plStack_5458 + 0x30))(plStack_5458);
            *(long *)(lVar14 + 0x78) = plVar21[1];
            lVar14 = plVar21[4];
            if (0 < (int)((ulong)(plVar21[5] - lVar14) >> 3) * -0x55555555) {
              lVar47 = 0;
              lVar51 = 0x10;
              do {
                if ((*(byte *)(*(long *)(lVar14 + lVar51) + 0x11) >> 3 & 1) != 0) {
                  plVar56 = plStack_5458 + 1;
                  lVar14 = (**(code **)(*plStack_5458 + 0x30))();
                  pAVar22 = (AST_TypedNode *)
                            (**(code **)(**(long **)(*(long *)(lVar14 + 0x50) + lVar47 * 8) + 0x18))
                                      ();
                  in_x2 = "assign";
                  uVar48 = GISLParserContext::lValueErrorCheck
                                     ((GISLParserContext *)local_54b0,(GsTSourceLoc *)plVar56,
                                      "assign",pAVar22);
                  if ((uVar48 & 1) != 0) {
                    in_x2 = (char *)pplVar53[3][2];
                    GISLParserContext::error
                              (GVar23,(char *)pplVar53[3][1],in_x2,
                               "Constant value cannot be passed for \'out\' or \'inout\' parameters."
                               ,"Error",&DAT_0050a39f);
                    GISLParserContext::recover();
                  }
                }
                lVar14 = plVar21[4];
                lVar47 = lVar47 + 1;
                lVar51 = lVar51 + 0x18;
              } while (lVar47 < (int)((ulong)(plVar21[5] - lVar14) >> 3) * -0x55555555);
            }
          }
          else {
            plStack_5458 = (long *)GISLParserUtil::ir_set_aggregate_op
                                             ((GISLParserUtil *)plVar56,
                                              (AST_Node *)(ulong)*(uint *)(plVar21 + 0x12),
                                              (GsTOperator)in_x2,(GsTSourceLoc)pplVar53[1],
                                              (GISLParserContext *)local_54b0);
            lVar51 = plVar21[0xb];
            lVar47 = plVar21[10];
            lVar14 = plVar21[0xc];
            lVar49 = plVar21[9];
            lVar42 = plVar21[8];
            plStack_5458[8] = plVar21[0xd];
            plStack_5458[7] = lVar14;
            plStack_5458[6] = lVar51;
            plStack_5458[5] = lVar47;
            plStack_5458[4] = lVar49;
            plStack_5458[3] = lVar42;
          }
          lVar51 = plVar21[0xb];
          lVar47 = plVar21[10];
          lVar14 = plVar21[0xc];
          lVar49 = plVar21[9];
          lVar42 = plVar21[8];
          plStack_5458[8] = plVar21[0xd];
          plStack_5458[7] = lVar14;
          plStack_5458[6] = lVar51;
          plStack_5458[5] = lVar47;
          plStack_5458[4] = lVar49;
          plStack_5458[3] = lVar42;
        }
      }
      else if (uVar50 == 0xb7) {
        lVar14 = (**(code **)(*pplVar53[3] + 0x18))();
        if ((lVar14 == 0) ||
           (lVar14 = (**(code **)(*pplVar53[3] + 0x18))(),
           *(int *)(*(long *)(lVar14 + 0x20) + 0x10) == 0)) {
          pbVar30 = (byte *)plVar41[1];
          pbVar34 = *(byte **)(pbVar30 + 0x10);
          if ((*pbVar30 & 1) == 0) {
            pbVar34 = pbVar30 + 1;
          }
          GISLParserContext::error
                    (GVar23,(char *)*pplVar53,(char *)pplVar53[1],"",pbVar34,
                     "array must be declared with a size before using this method");
          GISLParserContext::recover();
        }
        local_c0 = (undefined  [8])*local_54b0[0xb];
        uStack_b0 = 2;
        local_54f8[1] = 0;
        local_54f8[2] = 0;
        *local_54f8 = 0;
        uVar39 = IR_TypeSet::getScalarType((IR_TypeSet *)local_c0,6);
        in_x2 = (char *)pplVar53[1];
        uStack_b8 = (undefined4)uVar39;
        uStack_b4 = (undefined4)((ulong)uVar39 >> 0x20);
        plVar21 = (long *)GISLParserUtil::ir_add_constant
                                    ((GISLParserUtil *)local_c0,(SHC_Type *)*pplVar53,
                                     (GsTSourceLoc)in_x2,(GISLParserContext *)local_54b0);
        lVar14 = (**(code **)(*pplVar53[3] + 0x18))();
        plVar56 = plVar21 + 9;
        puVar29 = (undefined4 *)*plVar56;
        uVar64 = *(undefined4 *)(*(long *)(lVar14 + 0x20) + 0x10);
        if ((undefined4 *)plVar21[10] == puVar29) {
          std::__ndk1::vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
          ::__append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                      *)plVar56,1);
          puVar29 = (undefined4 *)*plVar56;
        }
        *puVar29 = 6;
        puVar29[1] = uVar64;
        plStack_5458 = plVar21;
      }
      else {
        local_c0 = (undefined  [8])*local_54b0[0xb];
        uStack_b0 = 0;
        local_54f8[1] = 0;
        local_54f8[2] = 0;
        *local_54f8 = 0;
        uVar39 = IR_TypeSet::getScalarType((IR_TypeSet *)local_c0,0);
        uStack_b8 = (undefined4)uVar39;
        uStack_b4 = (undefined4)((ulong)uVar39 >> 0x20);
        uVar48 = GISLParserContext::constructorErrorCheck
                           ((GISLParserContext *)local_54b0,(GsTSourceLoc *)pplVar53,
                            (AST_Node *)pplVar53[3],(GsTFunction *)plVar41,uVar50,
                            (SHC_Type *)local_c0);
        if ((uVar48 & 1) == 0) {
          in_x2 = local_c0;
          plStack_5458 = (long *)GISLParserContext::addConstructor
                                           ((AST_Node *)local_54b0,(SHC_Type *)pplVar53[3],
                                            (GsTOperator)in_x2,(GsTFunction *)(ulong)uVar50,
                                            (GsTSourceLoc)plVar41);
          if (plStack_5458 != (long *)0x0) goto LAB_00c27b04;
        }
        else {
          plStack_5458 = (long *)0x0;
        }
        GISLParserContext::recover();
        in_x2 = (char *)*pplVar53;
        plStack_5458 = (long *)GISLParserUtil::ir_set_aggregate_op
                                         ((GISLParserUtil *)0x0,(AST_Node *)(ulong)uVar50,
                                          (GsTOperator)in_x2,(GsTSourceLoc)pplVar53[1],
                                          (GISLParserContext *)local_54b0);
        plStack_5458[6] = CONCAT44(uStack_a4,uStack_a8);
        plStack_5458[5] = CONCAT44(uStack_ac,uStack_b0);
        plStack_5458[8] = (long)plStack_98;
        plStack_5458[7] = (long)local_a0;
        plStack_5458[4] = CONCAT44(uStack_b4,uStack_b8);
        plStack_5458[3] = (long)local_c0;
      }
LAB_00c27b04:
      (**(code **)(*plVar41 + 8))(plVar41);
      uVar37 = local_5504;
      break;
    case 0x11:
      plStack_5468 = pplVar53[1];
      local_5470 = *pplVar53;
      plStack_5458 = pplVar53[3];
      local_5460 = pplVar53[2];
      uStack_5448 = pplVar53[5];
      local_5450 = pplVar53[4];
      auStack_5438 = (undefined  [8])pplVar53[7];
      local_5440 = pplVar53[6];
      local_5410 = pplVar53[0xc];
      plStack_5428 = pplVar53[9];
      local_5430 = pplVar53[8];
      plStack_5418 = pplVar53[0xb];
      local_5420 = pplVar53[10];
      break;
    case 0x12:
      if ((*(int *)pplVar53[-0x17][4] == 4) &&
         (uVar48 = FUN_00c28174(pplVar53[5][1],"length"), (uVar48 & 1) != 0)) {
        uStack_5448 = pplVar53[5];
        local_5450 = pplVar53[4];
        plStack_5468 = pplVar53[1];
        local_5470 = *pplVar53;
        plStack_5458 = pplVar53[3];
        local_5460 = pplVar53[2];
        local_5410 = pplVar53[0xc];
        plStack_5458 = pplVar53[-0x17];
        auStack_5438 = (undefined  [8])pplVar53[7];
        local_5440 = pplVar53[6];
        plStack_5428 = pplVar53[9];
        local_5430 = pplVar53[8];
        plStack_5418 = pplVar53[0xb];
        local_5420 = pplVar53[10];
        *(undefined4 *)(pplVar53[5] + 0x12) = 0xb7;
        uVar37 = local_5504;
      }
      else {
        in_x2 = (char *)pplVar53[1];
        GISLParserContext::error
                  (GVar23,(char *)*pplVar53,in_x2,"methods are not supported",&DAT_0050a39f,
                   &DAT_0050a39f);
        GISLParserContext::recover();
        plStack_5468 = pplVar53[1];
        local_5470 = *pplVar53;
        plStack_5458 = pplVar53[3];
        local_5460 = pplVar53[2];
        uStack_5448 = pplVar53[5];
        local_5450 = pplVar53[4];
        auStack_5438 = (undefined  [8])pplVar53[7];
        local_5440 = pplVar53[6];
        local_5410 = pplVar53[0xc];
        plStack_5428 = pplVar53[9];
        local_5430 = pplVar53[8];
        plStack_5418 = pplVar53[0xb];
        local_5420 = pplVar53[10];
        uVar37 = local_5504;
      }
      break;
    case 0x13:
    case 0x14:
      plStack_5468 = pplVar53[-0xc];
      local_5470 = pplVar53[-0xd];
      plStack_5458 = pplVar53[-10];
      local_5460 = pplVar53[-0xb];
      local_5410 = pplVar53[-1];
      plStack_5418 = pplVar53[-2];
      local_5420 = pplVar53[-3];
      auStack_5438 = (undefined  [8])pplVar53[-6];
      local_5440 = pplVar53[-7];
      plStack_5428 = pplVar53[-4];
      local_5430 = pplVar53[-5];
      uStack_5448 = pplVar53[-8];
      local_5450 = pplVar53[-9];
      plStack_5468 = pplVar53[1];
      local_5470 = *pplVar53;
      break;
    case 0x15:
      uStack_5448 = pplVar53[5];
      plStack_5458 = (long *)0x0;
      goto LAB_00c25e3c;
    case 0x16:
      if (pplVar53[3] == (long *)0x0) goto LAB_00c26f94;
      local_c0 = (undefined  [8])0x0;
      uStack_b8 = 0;
      uStack_b4 = 0;
      plVar41 = (long *)SHC_PoolAllocator::allocate(*local_54d0,0x30);
      plVar21 = pplVar53[3];
      lVar47 = plVar21[8];
      lVar14 = plVar21[7];
      lVar51 = plVar21[3];
      lVar49 = plVar21[6];
      lVar42 = plVar21[5];
      plVar41[1] = plVar21[4];
      *plVar41 = lVar51;
      plVar41[3] = lVar49;
      plVar41[2] = lVar42;
      plVar41[5] = lVar47;
      plVar41[4] = lVar14;
      uStack_b0 = SUB84(plVar41,0);
      uStack_ac = (uint)((ulong)plVar41 >> 0x20);
      GsTFunction::addParameter((GsTFunction *)pplVar53[-8],(Parameter *)local_c0);
      uStack_5448 = pplVar53[-8];
      plStack_5458 = pplVar53[3];
      uVar37 = local_5504;
      break;
    case 0x17:
      if (pplVar53[3] == (long *)0x0) goto LAB_00c26f94;
      local_c0 = (undefined  [8])0x0;
      uStack_b8 = 0;
      uStack_b4 = 0;
      plVar41 = (long *)SHC_PoolAllocator::allocate((SHC_PoolAllocator *)local_54b0[0xb],0x30);
      plVar21 = pplVar53[3];
      lVar47 = plVar21[8];
      lVar14 = plVar21[7];
      lVar51 = plVar21[3];
      lVar49 = plVar21[6];
      lVar42 = plVar21[5];
      plVar41[1] = plVar21[4];
      *plVar41 = lVar51;
      plVar41[3] = lVar49;
      plVar41[2] = lVar42;
      plVar41[5] = lVar47;
      plVar41[4] = lVar14;
      uStack_b0 = SUB84(plVar41,0);
      uStack_ac = (uint)((ulong)plVar41 >> 0x20);
      GsTFunction::addParameter((GsTFunction *)pplVar53[-0x15],(Parameter *)local_c0);
      in_x2 = (char *)pplVar53[-0xd];
      uStack_5448 = pplVar53[-0x15];
      plStack_5458 = (long *)GISLParserUtil::ir_grow_aggregate
                                       ((GISLParserUtil *)pplVar53[-0x17],(AST_Node *)pplVar53[3],
                                        (AST_Node *)in_x2,(GsTSourceLoc)pplVar53[-0xc],0,
                                        (GISLParserContext *)local_54b0);
      uVar37 = local_5504;
      break;
    case 0x18:
      uStack_5448 = pplVar53[-8];
      goto LAB_00c25e3c;
    case 0x19:
      if (*(int *)(pplVar53 + 7) != 0) {
        plVar41 = pplVar53[8];
        plVar21 = pplVar53[9];
        local_5488 = (long *)CONCAT44(local_5488._4_4_,*(int *)(pplVar53 + 7));
        IR_QualFlags::getAsString(SUB81(&local_5488,0));
        uVar48 = local_5500;
        if (((ulong)local_c0 & 1) != 0) {
          uVar48 = CONCAT44(uStack_ac,uStack_b0);
        }
                    /* try { // try from 00c2321c to 00c2323b has its CatchHandler @ 00c27dac */
        GISLParserContext::error
                  (GVar23,(char *)plVar41,(char *)plVar21,"qualifiers are not allowed here",uVar48,
                   &DAT_0050a39f);
        if (((ulong)local_c0 & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_ac,uStack_b0));
        }
        GISLParserContext::recover();
        *(undefined4 *)(pplVar53 + 7) = 0;
      }
      in_x2 = (char *)(pplVar53 + 5);
      if (*(int *)pplVar53[6] == 3) {
        pSVar11 = (SHC_String *)SHC_String::New("",*local_54d0);
        plVar41 = (long *)SHC_PoolAllocator::allocate(*local_54d0,0xd0);
        GsTFunction::GsTFunction((GsTFunction *)plVar41,pSVar11,(SHC_Type *)in_x2,0x86,*local_54d0);
        plVar21 = pplVar53[8];
        uStack_5448 = plVar41;
        plVar41[0x15] = (long)pplVar53[9];
        plVar41[0x14] = (long)plVar21;
        plVar21 = pplVar53[8];
        plVar41[0x17] = (long)pplVar53[9];
        plVar41[0x16] = (long)plVar21;
        uVar37 = local_5504;
      }
      else {
        GVar8 = GISLParserContext::getConstructorOp
                          ((GISLParserContext *)local_54b0,(SHC_Type *)in_x2);
        if (GVar8 == 0) {
          plVar41 = pplVar53[8];
          plVar21 = pplVar53[9];
          uVar39 = SHC_Type::getBasicString();
          GISLParserContext::error
                    (GVar23,(char *)plVar41,(char *)plVar21,"cannot construct this type",uVar39,
                     &DAT_0050a39f);
          GISLParserContext::recover();
          plVar21 = (long *)*local_54b0[0xb];
          local_54e8[1] = 0;
          local_54e8[2] = 0;
          *local_54e8 = 0;
          plVar41 = (long *)IR_TypeSet::getScalarType((IR_TypeSet *)plVar21,3);
          pplVar53[5] = plVar21;
          pplVar53[6] = plVar41;
          GVar8 = 0x6c;
          *(undefined4 *)(pplVar53 + 7) = 0;
          *(ulong *)((long)pplVar53 + 0x44) = CONCAT44(uStack_b4,uStack_b8);
          *(undefined (*) [8])((long)pplVar53 + 0x3c) = local_c0;
          pplVar53[10] = (long *)CONCAT44(uStack_a8,uStack_ac);
          pplVar53[9] = (long *)CONCAT44(uStack_b0,uStack_b4);
        }
        pSVar11 = (SHC_String *)SHC_String::New("",*local_54d0);
        plVar41 = (long *)SHC_PoolAllocator::allocate(*local_54d0,0xd0);
        GsTFunction::GsTFunction((GsTFunction *)plVar41,pSVar11,(SHC_Type *)in_x2,GVar8,*local_54d0)
        ;
        plVar21 = pplVar53[8];
        uStack_5448 = plVar41;
        plVar41[0x15] = (long)pplVar53[9];
        plVar41[0x14] = (long)plVar21;
        plVar21 = pplVar53[8];
        plVar41[0x17] = (long)pplVar53[9];
        plVar41[0x16] = (long)plVar21;
        uVar37 = local_5504;
      }
      break;
    case 0x1a:
      uVar48 = GISLParserContext::reservedErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)pplVar53,
                          (SHC_String *)pplVar53[2]);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      plVar21 = pplVar53[2];
      plVar41 = (long *)SHC_PoolAllocator::allocate(*local_54d0,0xd0);
      local_c0 = *(undefined (*) [8])*local_54d0;
      uStack_b0 = 0;
      local_54f8[1] = 0;
      local_54f8[2] = 0;
      *local_54f8 = 0;
      uVar39 = IR_TypeSet::getScalarType((IR_TypeSet *)local_c0,0);
      uStack_b8 = (undefined4)uVar39;
      uStack_b4 = (undefined4)((ulong)uVar39 >> 0x20);
      in_x2 = local_c0;
      GsTFunction::GsTFunction
                ((GsTFunction *)plVar41,(SHC_String *)plVar21,(SHC_Type *)in_x2,0,*local_54d0);
      plVar21 = *pplVar53;
      uStack_5448 = plVar41;
      plVar41[0x15] = (long)pplVar53[1];
      plVar41[0x14] = (long)plVar21;
      plVar21 = *pplVar53;
      plVar41[0x17] = (long)pplVar53[1];
      plVar41[0x16] = (long)plVar21;
      uVar37 = local_5504;
      break;
    case 0x1b:
      uVar48 = GISLParserContext::reservedErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)pplVar53,
                          (SHC_String *)pplVar53[2]);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      plVar41 = (long *)SHC_PoolAllocator::allocate(*local_54d0,0xd0);
      plVar21 = pplVar53[2];
      local_c0 = *(undefined (*) [8])*local_54d0;
      uStack_b0 = 0;
      local_54f8[2] = 0;
      *local_54f8 = 0;
      local_54f8[1] = 0;
      uVar39 = IR_TypeSet::getScalarType((IR_TypeSet *)local_c0,0);
      uStack_b8 = (undefined4)uVar39;
      uStack_b4 = (undefined4)((ulong)uVar39 >> 0x20);
      in_x2 = local_c0;
      GsTFunction::GsTFunction
                ((GsTFunction *)plVar41,(SHC_String *)plVar21,(SHC_Type *)in_x2,0,*local_54d0);
      plVar21 = *pplVar53;
      uStack_5448 = plVar41;
      plVar41[0x15] = (long)pplVar53[1];
      plVar41[0x14] = (long)plVar21;
      plVar21 = *pplVar53;
      plVar41[0x17] = (long)pplVar53[1];
      plVar41[0x16] = (long)plVar21;
      uVar37 = local_5504;
      break;
    case 0x1d:
      uVar48 = GISLParserContext::lValueErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0xd),"++",
                          (AST_TypedNode *)pplVar53[3]);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      in_x2 = (char *)pplVar53[-0xd];
      plStack_5458 = (long *)GISLParserUtil::ir_add_unary_math
                                       ((GISLParserUtil *)0xd,(GsTOperator)pplVar53[3],
                                        (AST_Node *)in_x2,(GsTSourceLoc)pplVar53[-0xc],
                                        (GISLParserContext *)local_54b0);
      uVar37 = local_5504;
      if (plStack_5458 == (long *)0x0) {
        in_x2 = &DAT_004c88d5;
LAB_00c25ec8:
        GISLParserContext::unaryOpError
                  ((GsTSourceLoc *)local_54b0,(char *)(pplVar53 + -0xd),(SHC_Type *)in_x2);
LAB_00c25edc:
        GISLParserContext::recover();
        uVar37 = local_5504;
        goto switchD_00c22408_caseD_3;
      }
      break;
    case 0x1e:
      uVar48 = GISLParserContext::lValueErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0xd),"--",
                          (AST_TypedNode *)pplVar53[3]);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      in_x2 = (char *)pplVar53[-0xd];
      plStack_5458 = (long *)GISLParserUtil::ir_add_unary_math
                                       ((GISLParserUtil *)0xe,(GsTOperator)pplVar53[3],
                                        (AST_Node *)in_x2,(GsTSourceLoc)pplVar53[-0xc],
                                        (GISLParserContext *)local_54b0);
      uVar37 = local_5504;
      if (plStack_5458 == (long *)0x0) {
        in_x2 = &DAT_0050e565;
        goto LAB_00c25ec8;
      }
      break;
    case 0x1f:
      if (*(uint *)(pplVar53 + -0xb) == 0) goto switchD_00c22408_caseD_3;
      in_x2 = (char *)pplVar53[-0xd];
      plStack_5458 = (long *)GISLParserUtil::ir_add_unary_math
                                       ((GISLParserUtil *)(ulong)*(uint *)(pplVar53 + -0xb),
                                        (GsTOperator)pplVar53[3],(AST_Node *)in_x2,
                                        (GsTSourceLoc)pplVar53[-0xc],(GISLParserContext *)local_54b0
                                       );
      uVar37 = local_5504;
      if (plStack_5458 == (long *)0x0) {
        if (*(int *)(pplVar53 + -0xb) - 6U < 5) {
          in_x2 = &DAT_0053de7c +
                  *(int *)(&DAT_0053de7c + (long)(int)(*(int *)(pplVar53 + -0xb) - 6U) * 4);
        }
        else {
          in_x2 = &DAT_0050a39f;
        }
        GISLParserContext::unaryOpError
                  ((GsTSourceLoc *)local_54b0,(char *)(pplVar53 + -0xd),(SHC_Type *)in_x2);
        goto LAB_00c27288;
      }
      break;
    case 0x20:
      uVar50 = GISLParserContext::getConstructorOp
                         ((GISLParserContext *)local_54b0,(SHC_Type *)(pplVar53 + -0x15));
      pGVar52 = (GsTFunction *)(ulong)uVar50;
      if (uVar50 == 0) {
        plVar41 = pplVar53[-0x12];
        plVar21 = pplVar53[-0x11];
        uVar39 = SHC_Type::getBasicString();
        GISLParserContext::error
                  (GVar23,(char *)plVar41,(char *)plVar21,"cannot cast this type",uVar39,
                   &DAT_0050a39f);
        GISLParserContext::recover();
        plVar21 = (long *)*local_54b0[0xb];
        local_54e8[1] = 0;
        local_54e8[2] = 0;
        *local_54e8 = 0;
        plVar41 = (long *)IR_TypeSet::getScalarType((IR_TypeSet *)plVar21,3);
        pGVar52 = (GsTFunction *)0x6c;
        *(undefined4 *)(pplVar53 + -0x13) = 0;
        pplVar53[-0x15] = plVar21;
        pplVar53[-0x14] = plVar41;
        *(ulong *)((long)pplVar53 + -0x8c) = CONCAT44(uStack_b4,uStack_b8);
        *(undefined (*) [8])((long)pplVar53 + -0x94) = local_c0;
        pplVar53[-0x10] = (long *)CONCAT44(uStack_a8,uStack_ac);
        pplVar53[-0x11] = (long *)CONCAT44(uStack_b0,uStack_b4);
      }
      pSVar11 = (SHC_String *)SHC_String::New("",(SHC_PoolAllocator *)local_54b0[0xb]);
      this = (GsTFunction *)SHC_PoolAllocator::allocate((SHC_PoolAllocator *)local_54b0[0xb],0xd0);
      GsTFunction::GsTFunction
                (this,pSVar11,(SHC_Type *)(pplVar53 + -0x15),(GsTOperator)pGVar52,
                 (SHC_PoolAllocator *)local_54b0[0xb]);
      plVar41 = pplVar53[-0x12];
      local_5488 = (long *)0x0;
      uStack_5480 = 0;
      *(long **)(this + 0xa8) = pplVar53[-0x11];
      *(long **)(this + 0xa0) = plVar41;
      plVar41 = pplVar53[-0x27];
      *(long **)(this + 0xb8) = pplVar53[-0x26];
      *(long **)(this + 0xb0) = plVar41;
      local_5478 = (long *)SHC_PoolAllocator::allocate((SHC_PoolAllocator *)local_54b0[0xb],0x30);
      plVar41 = pplVar53[3];
      lVar47 = plVar41[8];
      lVar14 = plVar41[7];
      lVar51 = plVar41[3];
      lVar49 = plVar41[6];
      lVar42 = plVar41[5];
      local_5478[1] = plVar41[4];
      *local_5478 = lVar51;
      local_5478[3] = lVar49;
      local_5478[2] = lVar42;
      local_5478[5] = lVar47;
      local_5478[4] = lVar14;
      GsTFunction::addParameter(this,(Parameter *)&local_5488);
      local_c0 = (undefined  [8])*local_54b0[0xb];
      uStack_b0 = 0;
      local_54f8[1] = 0;
      local_54f8[2] = 0;
      *local_54f8 = 0;
      uVar39 = IR_TypeSet::getScalarType((IR_TypeSet *)local_c0,0);
      uStack_b8 = (undefined4)uVar39;
      uStack_b4 = (undefined4)((ulong)uVar39 >> 0x20);
      uVar48 = GISLParserContext::constructorErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0x12),
                          (AST_Node *)pplVar53[3],this,(GsTOperator)pGVar52,(SHC_Type *)local_c0);
      if ((uVar48 & 1) == 0) {
        in_x2 = local_c0;
        plStack_5458 = (long *)GISLParserContext::addConstructor
                                         ((AST_Node *)local_54b0,(SHC_Type *)pplVar53[3],
                                          (GsTOperator)in_x2,pGVar52,(GsTSourceLoc)this);
        if (plStack_5458 != (long *)0x0) {
          plStack_5458[4] = CONCAT44(uStack_b4,uStack_b8);
          plStack_5458[3] = (long)local_c0;
          plStack_5458[6] = CONCAT44(uStack_a4,uStack_a8);
          plStack_5458[5] = CONCAT44(uStack_ac,uStack_b0);
          plStack_5458[8] = (long)plStack_98;
          plStack_5458[7] = (long)local_a0;
          uVar37 = local_5504;
          break;
        }
      }
      else {
        plStack_5458 = (long *)0x0;
      }
      GISLParserContext::recover();
      in_x2 = (char *)pplVar53[-0x12];
      plStack_5458 = (long *)GISLParserUtil::ir_set_aggregate_op
                                       ((GISLParserUtil *)0x0,(AST_Node *)pGVar52,(GsTOperator)in_x2
                                        ,(GsTSourceLoc)pplVar53[-0x11],
                                        (GISLParserContext *)local_54b0);
      uVar37 = local_5504;
      break;
    case 0x21:
      local_5460 = (long *)((ulong)local_5460._4_4_ << 0x20);
      plStack_5468 = pplVar53[1];
      local_5470 = *pplVar53;
      break;
    case 0x22:
      plStack_5468 = pplVar53[1];
      local_5470 = *pplVar53;
      uVar64 = 6;
      goto LAB_00c26698;
    case 0x23:
      plStack_5468 = pplVar53[1];
      local_5470 = *pplVar53;
      uVar64 = 7;
      goto LAB_00c26698;
    case 0x24:
      plStack_5468 = pplVar53[1];
      local_5470 = *pplVar53;
      uVar64 = 8;
      goto LAB_00c26698;
    case 0x25:
      plStack_5468 = pplVar53[1];
      local_5470 = *pplVar53;
      uVar64 = 10;
      goto LAB_00c26698;
    case 0x27:
      plVar41 = pplVar53[-0xd];
      uVar26 = SUB81(pplVar53[-0xc],0);
      in_x2 = (char *)pplVar53[-0x17];
      GVar24 = (GsTSourceLoc)pplVar53[3];
      pAVar22 = (AST_TypedNode *)0x3b;
      goto LAB_00c26598;
    case 0x28:
      plVar41 = pplVar53[-0xd];
      uVar26 = SUB81(pplVar53[-0xc],0);
      in_x2 = (char *)pplVar53[-0x17];
      GVar24 = (GsTSourceLoc)pplVar53[3];
      pAVar22 = (AST_TypedNode *)0x3c;
      goto LAB_00c26598;
    case 0x29:
      plVar41 = pplVar53[-0xd];
      uVar26 = SUB81(pplVar53[-0xc],0);
      in_x2 = (char *)pplVar53[-0x17];
      GVar24 = (GsTSourceLoc)pplVar53[3];
      pAVar22 = (AST_TypedNode *)0x3d;
      goto LAB_00c26598;
    case 0x2b:
      plVar41 = pplVar53[-0xd];
      uVar26 = SUB81(pplVar53[-0xc],0);
      in_x2 = (char *)pplVar53[-0x17];
      GVar24 = (GsTSourceLoc)pplVar53[3];
      pAVar22 = (AST_TypedNode *)0x39;
      goto LAB_00c26598;
    case 0x2c:
      plVar41 = pplVar53[-0xd];
      uVar26 = SUB81(pplVar53[-0xc],0);
      in_x2 = (char *)pplVar53[-0x17];
      GVar24 = (GsTSourceLoc)pplVar53[3];
      pAVar22 = (AST_TypedNode *)0x3a;
      goto LAB_00c26598;
    case 0x2e:
      plVar41 = pplVar53[-0xd];
      uVar26 = SUB81(pplVar53[-0xc],0);
      in_x2 = (char *)pplVar53[-0x17];
      GVar24 = (GsTSourceLoc)pplVar53[3];
      pAVar22 = (AST_TypedNode *)0x3f;
      goto LAB_00c26598;
    case 0x2f:
      plVar41 = pplVar53[-0xd];
      uVar26 = SUB81(pplVar53[-0xc],0);
      in_x2 = (char *)pplVar53[-0x17];
      GVar24 = (GsTSourceLoc)pplVar53[3];
      pAVar22 = (AST_TypedNode *)0x3e;
      goto LAB_00c26598;
    case 0x31:
      plVar41 = pplVar53[-0xd];
      uVar26 = SUB81(pplVar53[-0xc],0);
      in_x2 = (char *)pplVar53[-0x17];
      GVar24 = (GsTSourceLoc)pplVar53[3];
      pAVar22 = (AST_TypedNode *)0x47;
      goto LAB_00c26598;
    case 0x32:
      plVar41 = pplVar53[-0xd];
      uVar26 = SUB81(pplVar53[-0xc],0);
      in_x2 = (char *)pplVar53[-0x17];
      GVar24 = (GsTSourceLoc)pplVar53[3];
      pAVar22 = (AST_TypedNode *)0x48;
      goto LAB_00c26598;
    case 0x33:
      plVar41 = pplVar53[-0xd];
      uVar26 = SUB81(pplVar53[-0xc],0);
      in_x2 = (char *)pplVar53[-0x17];
      GVar24 = (GsTSourceLoc)pplVar53[3];
      pAVar22 = (AST_TypedNode *)0x49;
      goto LAB_00c26598;
    case 0x34:
      plVar41 = pplVar53[-0xd];
      uVar26 = SUB81(pplVar53[-0xc],0);
      in_x2 = (char *)pplVar53[-0x17];
      GVar24 = (GsTSourceLoc)pplVar53[3];
      pAVar22 = (AST_TypedNode *)0x4a;
      goto LAB_00c26598;
    case 0x36:
      plVar41 = pplVar53[-0xd];
      uVar26 = SUB81(pplVar53[-0xc],0);
      in_x2 = (char *)pplVar53[-0x17];
      GVar24 = (GsTSourceLoc)pplVar53[3];
      pAVar22 = (AST_TypedNode *)0x43;
      goto LAB_00c26598;
    case 0x37:
      plVar41 = pplVar53[-0xd];
      uVar26 = SUB81(pplVar53[-0xc],0);
      in_x2 = (char *)pplVar53[-0x17];
      GVar24 = (GsTSourceLoc)pplVar53[3];
      pAVar22 = (AST_TypedNode *)0x44;
      goto LAB_00c26598;
    case 0x39:
      plVar41 = pplVar53[-0xd];
      uVar26 = SUB81(pplVar53[-0xc],0);
      in_x2 = (char *)pplVar53[-0x17];
      GVar24 = (GsTSourceLoc)pplVar53[3];
      pAVar22 = (AST_TypedNode *)0x40;
      goto LAB_00c26598;
    case 0x3b:
      plVar41 = pplVar53[-0xd];
      uVar26 = SUB81(pplVar53[-0xc],0);
      in_x2 = (char *)pplVar53[-0x17];
      GVar24 = (GsTSourceLoc)pplVar53[3];
      pAVar22 = (AST_TypedNode *)0x42;
      goto LAB_00c26598;
    case 0x3d:
      plVar41 = pplVar53[-0xd];
      uVar26 = SUB81(pplVar53[-0xc],0);
      in_x2 = (char *)pplVar53[-0x17];
      GVar24 = (GsTSourceLoc)pplVar53[3];
      pAVar22 = (AST_TypedNode *)0x41;
      goto LAB_00c26598;
    case 0x3f:
      plVar41 = pplVar53[-0xd];
      uVar26 = SUB81(pplVar53[-0xc],0);
      in_x2 = (char *)pplVar53[-0x17];
      GVar24 = (GsTSourceLoc)pplVar53[3];
      pAVar22 = (AST_TypedNode *)0x4e;
      goto LAB_00c26598;
    case 0x41:
      plVar41 = pplVar53[-0xd];
      uVar26 = SUB81(pplVar53[-0xc],0);
      in_x2 = (char *)pplVar53[-0x17];
      GVar24 = (GsTSourceLoc)pplVar53[3];
      pAVar22 = (AST_TypedNode *)0x4d;
      goto LAB_00c26598;
    case 0x43:
      plVar41 = pplVar53[-0xd];
      uVar26 = SUB81(pplVar53[-0xc],0);
      in_x2 = (char *)pplVar53[-0x17];
      GVar24 = (GsTSourceLoc)pplVar53[3];
      pAVar22 = (AST_TypedNode *)0x4c;
LAB_00c26598:
      plVar41 = (long *)GISLParserContext::add_binary
                                  (GVar23,pAVar22,(AST_TypedNode *)in_x2,GVar24,(char *)plVar41,
                                   (bool)uVar26);
LAB_00c265b8:
      plStack_5458 = plVar41;
      uVar37 = local_5504;
      param_2 = (GISLParserContext *)local_54b0;
      break;
    case 0x45:
      pplVar16 = pplVar53 + -0x27;
      uVar48 = GISLParserContext::boolOrVectorErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)pplVar16,
                          (AST_TypedNode *)pplVar53[-0x31]);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      in_x2 = (char *)pplVar53[3];
      plStack_5458 = (long *)GISLParserUtil::ir_add_selection
                                       ((GISLParserUtil *)pplVar53[-0x31],
                                        (AST_TypedNode *)pplVar53[-0x17],(AST_TypedNode *)in_x2,
                                        (AST_TypedNode *)*pplVar16,(GsTSourceLoc)pplVar53[-0x26],
                                        (GISLParserContext *)local_54b0);
      uVar37 = local_5504;
      if (plStack_5458 == (long *)0x0) {
        in_x2 = &DAT_00513230;
        GISLParserContext::binaryOpError
                  ((GsTSourceLoc *)local_54b0,(char *)pplVar16,(SHC_Type *)&DAT_00513230,
                   (SHC_Type *)(pplVar53[-0x17] + 3));
        GISLParserContext::recover();
        goto switchD_00c22408_caseD_3;
      }
      break;
    case 0x47:
      uVar48 = GISLParserContext::lValueErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0xd),"assign"
                          ,(AST_TypedNode *)pplVar53[-0x17]);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      in_x2 = (char *)pplVar53[-0x17];
      plStack_5458 = (long *)GISLParserContext::addAssign
                                       (GVar23,(AST_TypedNode *)(ulong)*(uint *)(pplVar53 + -0xb),
                                        (AST_TypedNode *)in_x2,(GsTSourceLoc)pplVar53[3]);
      if (plStack_5458 == (long *)0x0) {
        in_x2 = "assign";
        GISLParserContext::assignError
                  ((GsTSourceLoc *)local_54b0,(char *)(pplVar53 + -0xd),(SHC_Type *)"assign",
                   (SHC_Type *)(pplVar53[-0x17] + 3));
        GISLParserContext::recover();
        plStack_5458 = pplVar53[-0x17];
        goto LAB_00c27034;
      }
      if ((*(int *)pplVar53[-0x17][4] == 4) || (uVar37 = local_5504, *(int *)pplVar53[3][4] == 4)) {
        GISLParserContext::recover();
        uVar37 = local_5504;
      }
      break;
    case 0x48:
      plStack_5468 = pplVar53[1];
      local_5470 = *pplVar53;
      uVar64 = 0x89;
      goto LAB_00c26698;
    case 0x49:
      plStack_5468 = pplVar53[1];
      local_5470 = *pplVar53;
      uVar64 = 0x8c;
      goto LAB_00c26698;
    case 0x4a:
      plStack_5468 = pplVar53[1];
      local_5470 = *pplVar53;
      uVar64 = 0x8d;
      goto LAB_00c26698;
    case 0x4b:
      plStack_5468 = pplVar53[1];
      local_5470 = *pplVar53;
      uVar64 = 0x8e;
      goto LAB_00c26698;
    case 0x4c:
      plStack_5468 = pplVar53[1];
      local_5470 = *pplVar53;
      uVar64 = 0x8a;
      goto LAB_00c26698;
    case 0x4d:
      plStack_5468 = pplVar53[1];
      local_5470 = *pplVar53;
      uVar64 = 0x8b;
      goto LAB_00c26698;
    case 0x4e:
      plStack_5468 = pplVar53[1];
      local_5470 = *pplVar53;
      uVar64 = 0x92;
      goto LAB_00c26698;
    case 0x4f:
      plStack_5468 = pplVar53[1];
      local_5470 = *pplVar53;
      uVar64 = 0x93;
      goto LAB_00c26698;
    case 0x50:
      plStack_5468 = pplVar53[1];
      local_5470 = *pplVar53;
      uVar64 = 0x8f;
      goto LAB_00c26698;
    case 0x51:
      plStack_5468 = pplVar53[1];
      local_5470 = *pplVar53;
      uVar64 = 0x91;
      goto LAB_00c26698;
    case 0x52:
      plStack_5468 = pplVar53[1];
      local_5470 = *pplVar53;
      uVar64 = 0x90;
LAB_00c26698:
      local_5460 = (long *)CONCAT44(local_5460._4_4_,uVar64);
      break;
    case 0x54:
      in_x2 = (char *)pplVar53[-0xd];
      plStack_5458 = (long *)GISLParserUtil::ir_add_comma
                                       ((GISLParserUtil *)pplVar53[-0x17],
                                        (AST_TypedNode *)pplVar53[3],(AST_TypedNode *)in_x2,
                                        (GsTSourceLoc)pplVar53[-0xc],(GISLParserContext *)local_54b0
                                       );
      uVar37 = local_5504;
      if (plStack_5458 == (long *)0x0) {
        in_x2 = &DAT_004df685;
        GISLParserContext::binaryOpError
                  ((GsTSourceLoc *)local_54b0,(char *)(pplVar53 + -0xd),(SHC_Type *)&DAT_004df685,
                   (SHC_Type *)(pplVar53[-0x17] + 3));
        goto LAB_00c25edc;
      }
      break;
    case 0x55:
      uVar48 = GISLParserContext::constErrorCheck
                         ((GISLParserContext *)local_54b0,(AST_TypedNode *)pplVar53[3]);
      if ((uVar48 & 1) != 0) {
LAB_00c27288:
        GISLParserContext::recover();
      }
      plStack_5458 = pplVar53[3];
      uVar37 = local_5504;
      break;
    case 0x56:
    case 0x57:
    case 0xaf:
    case 0xb5:
    case 0xb7:
    case 0xbd:
    case 0xcd:
    case 0xd9:
      plStack_5458 = (long *)0x0;
      break;
    case 0x59:
    case 0xba:
      in_x2 = (char *)pplVar53[-0xc];
      plVar41 = pplVar53[-0xb];
      plVar21 = pplVar53[-0xd];
      bVar7 = false;
      goto LAB_00c24434;
    case 0x5a:
      plVar41 = *local_54b0;
      pSVar11 = (SHC_String *)(**(code **)(*pplVar53[-8] + 0x10))();
      in_x2 = (char *)0x0;
      lVar14 = GsTSymbolTable::find((GsTSymbolTable *)plVar41,pSVar11,(bool *)0x0,(bool *)0x0);
      plVar41 = pplVar53[-8];
      if (lVar14 == 0) {
        plStack_5468 = pplVar53[1];
        local_5470 = *pplVar53;
      }
      else {
        if (*(long *)(lVar14 + 0x48) != plVar41[9]) {
          pbVar30 = (byte *)plVar41[1];
          in_x2 = (char *)pplVar53[1];
          pbVar34 = *(byte **)(pbVar30 + 0x10);
          if ((*pbVar30 & 1) == 0) {
            pbVar34 = pbVar30 + 1;
          }
          GISLParserContext::error
                    (GVar23,(char *)*pplVar53,in_x2,
                     "overloaded functions must have the same return type",pbVar34,&DAT_0050a39f);
          GISLParserContext::recover();
        }
        lVar47 = *(long *)(lVar14 + 0x20);
        lVar51 = *(long *)(lVar14 + 0x28);
        if (0 < (int)((ulong)(lVar51 - lVar47) >> 3) * -0x55555555) {
          lVar42 = 0;
          lVar49 = 0x10;
          do {
            if (*(int *)(*(long *)(lVar47 + lVar49) + 0x10) !=
                *(int *)(*(long *)(pplVar53[-8][4] + lVar49) + 0x10)) {
              pbVar30 = (byte *)pplVar53[-8][1];
              in_x2 = (char *)pplVar53[1];
              pbVar34 = *(byte **)(pbVar30 + 0x10);
              if ((*pbVar30 & 1) == 0) {
                pbVar34 = pbVar30 + 1;
              }
              GISLParserContext::error
                        (GVar23,(char *)*pplVar53,in_x2,
                         "overloaded functions must have the same parameter qualifiers",pbVar34,
                         &DAT_0050a39f);
              GISLParserContext::recover();
              lVar47 = *(long *)(lVar14 + 0x20);
              lVar51 = *(long *)(lVar14 + 0x28);
            }
            lVar42 = lVar42 + 1;
            lVar49 = lVar49 + 0x18;
          } while (lVar42 < (int)((ulong)(lVar51 - lVar47) >> 3) * -0x55555555);
        }
        plVar41 = pplVar53[-8];
        plStack_5468 = pplVar53[1];
        local_5470 = *pplVar53;
        lVar47 = *(long *)(lVar14 + 0xb0);
        plVar41[0x17] = *(long *)(lVar14 + 0xb8);
        plVar41[0x16] = lVar47;
      }
      uStack_5448 = plVar41;
      GsTSymbolTable::insert((GsTSymbolTable *)*local_54b0,(GsTSymbol *)plVar41);
      uVar37 = local_5504;
      break;
    case 0x5b:
      plVar41 = *local_54b0;
      pSVar11 = (SHC_String *)(**(code **)(*pplVar53[-0x15] + 0x10))();
      in_x2 = (char *)0x0;
      lVar14 = GsTSymbolTable::find((GsTSymbolTable *)plVar41,pSVar11,(bool *)0x0,(bool *)0x0);
      plVar41 = pplVar53[-0x15];
      if (lVar14 == 0) {
        plStack_5468 = pplVar53[-0xc];
        local_5470 = pplVar53[-0xd];
      }
      else {
        if (*(long *)(lVar14 + 0x48) != plVar41[9]) {
          pbVar30 = (byte *)plVar41[1];
          in_x2 = (char *)pplVar53[-0xc];
          pbVar34 = *(byte **)(pbVar30 + 0x10);
          if ((*pbVar30 & 1) == 0) {
            pbVar34 = pbVar30 + 1;
          }
          GISLParserContext::error
                    (GVar23,(char *)pplVar53[-0xd],in_x2,
                     "overloaded functions must have the same return type",pbVar34,&DAT_0050a39f);
          GISLParserContext::recover();
        }
        lVar47 = *(long *)(lVar14 + 0x20);
        lVar51 = *(long *)(lVar14 + 0x28);
        if (0 < (int)((ulong)(lVar51 - lVar47) >> 3) * -0x55555555) {
          lVar42 = 0;
          lVar49 = 0x10;
          do {
            if (*(int *)(*(long *)(lVar47 + lVar49) + 0x10) !=
                *(int *)(*(long *)(pplVar53[-0x15][4] + lVar49) + 0x10)) {
              pbVar30 = (byte *)pplVar53[-0x15][1];
              in_x2 = (char *)pplVar53[-0xc];
              pbVar34 = *(byte **)(pbVar30 + 0x10);
              if ((*pbVar30 & 1) == 0) {
                pbVar34 = pbVar30 + 1;
              }
              GISLParserContext::error
                        (GVar23,(char *)pplVar53[-0xd],in_x2,
                         "overloaded functions must have the same parameter qualifiers",pbVar34,
                         &DAT_0050a39f);
              GISLParserContext::recover();
              lVar47 = *(long *)(lVar14 + 0x20);
              lVar51 = *(long *)(lVar14 + 0x28);
            }
            lVar42 = lVar42 + 1;
            lVar49 = lVar49 + 0x18;
          } while (lVar42 < (int)((ulong)(lVar51 - lVar47) >> 3) * -0x55555555);
        }
        plVar41 = pplVar53[-0x15];
        plStack_5468 = pplVar53[-0xc];
        local_5470 = pplVar53[-0xd];
        lVar47 = *(long *)(lVar14 + 0xb0);
        plVar41[0x17] = *(long *)(lVar14 + 0xb8);
        plVar41[0x16] = lVar47;
      }
      *(undefined *)(plVar41 + 0x18) = 1;
      uStack_5448 = plVar41;
      GsTSymbolTable::insert((GsTSymbolTable *)*local_54b0,(GsTSymbol *)plVar41);
      uVar37 = local_5504;
      break;
    case 0x5c:
      pplVar16 = pplVar53 + -0x22;
      plVar41 = *local_54b0;
      pSVar11 = (SHC_String *)(**(code **)(**pplVar16 + 0x10))();
      in_x2 = (char *)0x0;
      lVar14 = GsTSymbolTable::find((GsTSymbolTable *)plVar41,pSVar11,(bool *)0x0,(bool *)0x0);
      plVar41 = *pplVar16;
      if (lVar14 == 0) {
        uStack_5448 = plVar41;
      }
      else {
        if (*(long *)(lVar14 + 0x48) != plVar41[9]) {
          pbVar30 = (byte *)plVar41[1];
          in_x2 = (char *)pplVar53[-0x19];
          pbVar34 = *(byte **)(pbVar30 + 0x10);
          if ((*pbVar30 & 1) == 0) {
            pbVar34 = pbVar30 + 1;
          }
          GISLParserContext::error
                    (GVar23,(char *)pplVar53[-0x1a],in_x2,
                     "overloaded functions must have the same return type",pbVar34,&DAT_0050a39f);
          GISLParserContext::recover();
        }
        lVar47 = *(long *)(lVar14 + 0x20);
        lVar51 = *(long *)(lVar14 + 0x28);
        if (0 < (int)((ulong)(lVar51 - lVar47) >> 3) * -0x55555555) {
          lVar42 = 0;
          lVar49 = 0x10;
          do {
            if (*(int *)(*(long *)(lVar47 + lVar49) + 0x10) !=
                *(int *)(*(long *)((*pplVar16)[4] + lVar49) + 0x10)) {
              pbVar30 = (byte *)(*pplVar16)[1];
              in_x2 = (char *)pplVar53[-0x19];
              pbVar34 = *(byte **)(pbVar30 + 0x10);
              if ((*pbVar30 & 1) == 0) {
                pbVar34 = pbVar30 + 1;
              }
              GISLParserContext::error
                        (GVar23,(char *)pplVar53[-0x1a],in_x2,
                         "overloaded functions must have the same parameter qualifiers",pbVar34,
                         &DAT_0050a39f);
              GISLParserContext::recover();
              lVar47 = *(long *)(lVar14 + 0x20);
              lVar51 = *(long *)(lVar14 + 0x28);
            }
            lVar42 = lVar42 + 1;
            lVar49 = lVar49 + 0x18;
          } while (lVar42 < (int)((ulong)(lVar51 - lVar47) >> 3) * -0x55555555);
        }
        plVar41 = *pplVar16;
        lVar47 = *(long *)(lVar14 + 0xb0);
        uStack_5448 = plVar41;
        plVar41[0x17] = *(long *)(lVar14 + 0xb8);
        plVar41[0x16] = lVar47;
      }
      plStack_5468 = pplVar53[-0x19];
      local_5470 = pplVar53[-0x1a];
      plVar41[2] = (long)pplVar53[2];
      uStack_5448 = plVar41;
      GsTSymbolTable::insert((GsTSymbolTable *)*local_54b0,(GsTSymbol *)plVar41);
      uVar37 = local_5504;
      break;
    case 0x5d:
    case 0x5e:
      uStack_5448 = pplVar53[5];
      goto LAB_00c25e3c;
    case 0x5f:
      uStack_5448 = pplVar53[-8];
      if ((*(uint *)pplVar53[7][1] | ((uint *)pplVar53[7][1])[2]) != 0) {
        GsTFunction::addParameter((GsTFunction *)pplVar53[-8],(Parameter *)(pplVar53 + 5));
        uVar37 = local_5504;
      }
      break;
    case 0x60:
      if ((*(uint *)pplVar53[7][1] | ((uint *)pplVar53[7][1])[2]) == 0) {
        in_x2 = (char *)pplVar53[-0xc];
        GISLParserContext::error
                  (GVar23,(char *)pplVar53[-0xd],in_x2,
                   "cannot be an argument type except for \'(void)\'",&DAT_0050be45,&DAT_0050a39f);
        goto LAB_00c25528;
      }
      uStack_5448 = pplVar53[-0x15];
      GsTFunction::addParameter((GsTFunction *)pplVar53[-0x15],(Parameter *)(pplVar53 + 5));
      uVar37 = local_5504;
      break;
    case 0x61:
      in_x2 = (char *)(pplVar53 + -0x15);
      pplVar16 = pplVar53 + -0x12;
      local_c0 = (undefined  [8])CONCAT44(local_c0._4_4_,*(undefined4 *)(pplVar53 + -0x13));
      uVar48 = GISLParserContext::returnTypeQualifierErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)pplVar16,(SHC_Type *)in_x2
                          ,(IR_QualFlags *)local_c0);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      plVar21 = pplVar53[-0xb];
      *(undefined4 *)(pplVar53 + -0x13) = local_c0._0_4_;
      plVar41 = (long *)SHC_PoolAllocator::allocate(*local_54d0,0xd0);
      GsTFunction::GsTFunction
                ((GsTFunction *)plVar41,(SHC_String *)plVar21,(SHC_Type *)in_x2,0,*local_54d0);
      plVar21 = *pplVar16;
      uStack_5448 = plVar41;
      plVar41[0x15] = (long)pplVar53[-0x11];
      plVar41[0x14] = (long)plVar21;
      plVar21 = *pplVar16;
      plVar41[0x17] = (long)pplVar53[-0x11];
      plVar41[0x16] = (long)plVar21;
      uVar37 = local_5504;
      break;
    case 0x62:
      if ((*(uint *)pplVar53[-7] | *(uint *)(pplVar53[-7] + 1)) == 0) {
        plVar41 = pplVar53[2];
        pSVar36 = (SHC_Type *)plVar41[2];
        if (((byte)*(SHC_Type *)plVar41 & 1) == 0) {
          pSVar36 = (SHC_Type *)((long)plVar41 + 1);
        }
        GISLParserContext::error
                  (GVar23,(char *)*pplVar53,(char *)pplVar53[1],"illegal use of type \'void\'",
                   pSVar36,&DAT_0050a39f);
        GISLParserContext::recover();
      }
      in_x2 = (char *)pplVar53[2];
      uVar48 = GISLParserContext::reservedErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)pplVar53,
                          (SHC_String *)in_x2);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      plVar41 = pplVar53[2];
      auStack_5438 = (undefined  [8])SHC_PoolAllocator::allocate(*local_54d0,0x30);
      plVar21 = pplVar53[-8];
      plVar13 = pplVar53[-5];
      plVar56 = pplVar53[-6];
      plVar61 = pplVar53[-3];
      plVar58 = pplVar53[-4];
      *(long **)((long)auStack_5438 + 8) = pplVar53[-7];
      *(long **)auStack_5438 = plVar21;
      *(long **)((long)auStack_5438 + 0x18) = plVar13;
      *(long **)((long)auStack_5438 + 0x10) = plVar56;
      *(long **)((long)auStack_5438 + 0x28) = plVar61;
      *(long **)((long)auStack_5438 + 0x20) = plVar58;
      plStack_5468 = pplVar53[1];
      local_5470 = *pplVar53;
      uStack_5448 = plVar41;
      goto LAB_00c251fc;
    case 99:
      if ((*(uint *)pplVar53[-0x21] | *(uint *)(pplVar53[-0x21] + 1)) == 0) {
        plVar41 = pplVar53[-0x18];
        pSVar36 = (SHC_Type *)plVar41[2];
        if (((byte)*(SHC_Type *)plVar41 & 1) == 0) {
          pSVar36 = (SHC_Type *)((long)plVar41 + 1);
        }
        GISLParserContext::error
                  (GVar23,(char *)pplVar53[-0x1a],(char *)pplVar53[-0x19],
                   "illegal use of type \'void\'",pSVar36,&DAT_0050a39f);
        GISLParserContext::recover();
      }
      pplVar16 = pplVar53 + -0x1a;
      in_x2 = (char *)pplVar53[-0x18];
      lVar14 = -0x110;
      uVar48 = GISLParserContext::reservedErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)pplVar16,
                          (SHC_String *)in_x2);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      plVar41 = pplVar53[-0x18];
      goto LAB_00c2362c;
    case 100:
      if ((*(uint *)pplVar53[-0x14] | *(uint *)(pplVar53[-0x14] + 1)) == 0) {
        plVar41 = pplVar53[-0xb];
        pSVar36 = (SHC_Type *)plVar41[2];
        if (((byte)*(SHC_Type *)plVar41 & 1) == 0) {
          pSVar36 = (SHC_Type *)((long)plVar41 + 1);
        }
        GISLParserContext::error
                  (GVar23,(char *)pplVar53[-0xd],(char *)pplVar53[-0xc],
                   "illegal use of type \'void\'",pSVar36,&DAT_0050a39f);
        GISLParserContext::recover();
      }
      pplVar16 = pplVar53 + -0xd;
      in_x2 = (char *)pplVar53[-0xb];
      lVar14 = -0xa8;
      uVar48 = GISLParserContext::reservedErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)pplVar16,
                          (SHC_String *)in_x2);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      plVar41 = pplVar53[-0xb];
LAB_00c2362c:
      pplVar46 = (long **)((long)pplVar53 + lVar14);
      auStack_5438 = (undefined  [8])SHC_PoolAllocator::allocate(*local_54d0,0x30);
      plVar21 = *pplVar46;
      plVar13 = pplVar46[3];
      plVar56 = pplVar46[2];
      plVar61 = pplVar46[5];
      plVar58 = pplVar46[4];
      *(long **)((long)auStack_5438 + 8) = pplVar46[1];
      *(long **)auStack_5438 = plVar21;
      *(long **)((long)auStack_5438 + 0x18) = plVar13;
      *(long **)((long)auStack_5438 + 0x10) = plVar56;
      *(long **)((long)auStack_5438 + 0x28) = plVar61;
      *(long **)((long)auStack_5438 + 0x20) = plVar58;
      plStack_5468 = pplVar16[1];
      local_5470 = *pplVar16;
      uStack_5448 = plVar41;
LAB_00c251fc:
      local_5440 = (long *)0x0;
      uVar37 = local_5504;
      break;
    case 0x65:
      if ((*(uint *)pplVar53[-0x21] | *(uint *)(pplVar53[-0x21] + 1)) == 0) {
        plVar41 = pplVar53[-0x18];
        pSVar36 = (SHC_Type *)plVar41[2];
        if (((byte)*(SHC_Type *)plVar41 & 1) == 0) {
          pSVar36 = (SHC_Type *)((long)plVar41 + 1);
        }
        GISLParserContext::error
                  (GVar23,(char *)pplVar53[-0x1a],(char *)pplVar53[-0x19],
                   "illegal use of type \'void\'",pSVar36,&DAT_0050a39f);
        GISLParserContext::recover();
      }
      in_x2 = (char *)pplVar53[-0x18];
      uVar48 = GISLParserContext::reservedErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0x1a),
                          (SHC_String *)in_x2);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      plVar41 = pplVar53[-0x18];
      plVar21 = pplVar53[2];
      auStack_5438 = (undefined  [8])SHC_PoolAllocator::allocate(*local_54d0,0x30);
      plVar56 = pplVar53[-0x22];
      plVar58 = pplVar53[-0x1f];
      plVar13 = pplVar53[-0x20];
      plVar62 = pplVar53[-0x1d];
      plVar61 = pplVar53[-0x1e];
      *(long **)((long)auStack_5438 + 8) = pplVar53[-0x21];
      *(long **)auStack_5438 = plVar56;
      *(long **)((long)auStack_5438 + 0x18) = plVar58;
      *(long **)((long)auStack_5438 + 0x10) = plVar13;
      *(long **)((long)auStack_5438 + 0x28) = plVar62;
      *(long **)((long)auStack_5438 + 0x20) = plVar61;
      plStack_5468 = pplVar53[-0x19];
      local_5470 = pplVar53[-0x1a];
      uStack_5448 = plVar41;
      local_5440 = plVar21;
      goto LAB_00c2631c;
    case 0x66:
      pplVar16 = pplVar53 + -0x2f;
      uVar48 = GISLParserContext::arrayTypeErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0x1a),
                          (SHC_Type *)pplVar16);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      uVar48 = GISLParserContext::reservedErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0x27),
                          (SHC_String *)pplVar53[-0x25]);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      uVar48 = GISLParserContext::arraySizeErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0x1a),
                          (AST_TypedNode *)pplVar53[-10],(uint *)local_c0);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      in_x2 = (char *)((ulong)local_c0 & 0xffffffff);
      plVar41 = (long *)IR_TypeSet::getArrayType
                                  ((IR_TypeSet *)*pplVar16,(IR_Type *)pplVar53[-0x2e],local_c0._0_4_
                                  );
      pplVar53[-0x2e] = plVar41;
      plVar41 = pplVar53[-0x25];
      pplVar53[-0x2a] = (long *)0x0;
      auStack_5438 = (undefined  [8])SHC_PoolAllocator::allocate(*local_54d0,0x30);
      plVar21 = *pplVar16;
      plVar13 = pplVar53[-0x2c];
      plVar56 = pplVar53[-0x2d];
      plVar61 = pplVar53[-0x2a];
      plVar58 = pplVar53[-0x2b];
      *(long **)((long)auStack_5438 + 8) = pplVar53[-0x2e];
      *(long **)auStack_5438 = plVar21;
      *(long **)((long)auStack_5438 + 0x18) = plVar13;
      *(long **)((long)auStack_5438 + 0x10) = plVar56;
      *(long **)((long)auStack_5438 + 0x28) = plVar61;
      *(long **)((long)auStack_5438 + 0x20) = plVar58;
      plStack_5468 = pplVar53[-0x26];
      local_5470 = pplVar53[-0x27];
      uStack_5448 = plVar41;
      local_5440 = (long *)0x0;
      goto LAB_00c26278;
    case 0x67:
      pplVar16 = pplVar53 + -0x22;
      uVar48 = GISLParserContext::arrayTypeErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0xd),
                          (SHC_Type *)pplVar16);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      uVar48 = GISLParserContext::reservedErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0x1a),
                          (SHC_String *)pplVar53[-0x18]);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      in_x2 = (char *)0x0;
      plVar41 = (long *)IR_TypeSet::getArrayType
                                  ((IR_TypeSet *)*pplVar16,(IR_Type *)pplVar53[-0x21],0);
      pplVar53[-0x1d] = (long *)0x0;
      pplVar53[-0x21] = plVar41;
      plVar41 = pplVar53[-0x18];
      auStack_5438 = (undefined  [8])SHC_PoolAllocator::allocate(*local_54d0,0x30);
      plVar21 = *pplVar16;
      plVar13 = pplVar53[-0x1f];
      plVar56 = pplVar53[-0x20];
      plVar61 = pplVar53[-0x1d];
      plVar58 = pplVar53[-0x1e];
      *(long **)((long)auStack_5438 + 8) = pplVar53[-0x21];
      *(long **)auStack_5438 = plVar21;
      *(long **)((long)auStack_5438 + 0x18) = plVar13;
      *(long **)((long)auStack_5438 + 0x10) = plVar56;
      *(long **)((long)auStack_5438 + 0x28) = plVar61;
      *(long **)((long)auStack_5438 + 0x20) = plVar58;
      plStack_5468 = pplVar53[-0x19];
      local_5470 = pplVar53[-0x1a];
      uStack_5448 = plVar41;
      local_5440 = (long *)0x0;
LAB_00c2631c:
      uVar37 = local_5504;
      break;
    case 0x68:
      pplVar16 = pplVar53 + -0x49;
      uVar48 = GISLParserContext::arrayTypeErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0x34),
                          (SHC_Type *)pplVar16);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      uVar48 = GISLParserContext::reservedErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0x41),
                          (SHC_String *)pplVar53[-0x3f]);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      uVar48 = GISLParserContext::arraySizeErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0x34),
                          (AST_TypedNode *)pplVar53[-0x24],(uint *)local_c0);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      in_x2 = (char *)((ulong)local_c0 & 0xffffffff);
      plVar41 = (long *)IR_TypeSet::getArrayType
                                  ((IR_TypeSet *)*pplVar16,(IR_Type *)pplVar53[-0x48],local_c0._0_4_
                                  );
      pplVar53[-0x48] = plVar41;
      plVar41 = pplVar53[-0x3f];
      plVar21 = pplVar53[2];
      pplVar53[-0x44] = (long *)0x0;
      auStack_5438 = (undefined  [8])SHC_PoolAllocator::allocate(*local_54d0,0x30);
      plVar56 = *pplVar16;
      plVar58 = pplVar53[-0x46];
      plVar13 = pplVar53[-0x47];
      plVar62 = pplVar53[-0x44];
      plVar61 = pplVar53[-0x45];
      *(long **)((long)auStack_5438 + 8) = pplVar53[-0x48];
      *(long **)auStack_5438 = plVar56;
      *(long **)((long)auStack_5438 + 0x18) = plVar58;
      *(long **)((long)auStack_5438 + 0x10) = plVar13;
      *(long **)((long)auStack_5438 + 0x28) = plVar62;
      *(long **)((long)auStack_5438 + 0x20) = plVar61;
      plStack_5468 = pplVar53[-0x40];
      local_5470 = pplVar53[-0x41];
      uStack_5448 = plVar41;
      local_5440 = plVar21;
LAB_00c26278:
      uVar37 = local_5504;
      param_2 = (GISLParserContext *)local_54b0;
      break;
    case 0x69:
    case 0x6a:
      in_x2 = (char *)pplVar53[7];
      uVar48 = GISLParserContext::paramQualifierErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)pplVar53,(SHC_Type *)in_x2
                          ,(IR_QualFlags *)(pplVar53 + -8));
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      uStack_5448 = pplVar53[5];
      local_5450 = pplVar53[4];
      auStack_5438 = (undefined  [8])pplVar53[7];
      local_5440 = pplVar53[6];
      local_5410 = pplVar53[0xc];
      plStack_5468 = pplVar53[1];
      local_5470 = *pplVar53;
      plStack_5458 = pplVar53[3];
      local_5460 = pplVar53[2];
      plStack_5428 = pplVar53[9];
      local_5430 = pplVar53[8];
      plStack_5418 = pplVar53[0xb];
      local_5420 = pplVar53[10];
      *(undefined4 *)(pplVar53[7] + 2) = *(undefined4 *)(pplVar53 + -8);
      uVar37 = local_5504;
      break;
    case 0x6b:
      uVar64 = 1;
      goto LAB_00c266dc;
    case 0x6c:
      uVar64 = 2;
      goto LAB_00c266dc;
    case 0x6d:
      uVar64 = 8;
      goto LAB_00c266dc;
    case 0x6e:
      uVar64 = 0x10;
      goto LAB_00c266dc;
    case 0x6f:
      uVar64 = 0x20;
      goto LAB_00c266dc;
    case 0x70:
      uVar64 = 0x40;
      goto LAB_00c266dc;
    case 0x71:
      uVar64 = 0x80;
      goto LAB_00c266dc;
    case 0x72:
      uVar64 = 0x100;
      goto LAB_00c266dc;
    case 0x73:
      uVar64 = 0x400;
      goto LAB_00c266dc;
    case 0x74:
      uVar64 = 0x800;
      goto LAB_00c266dc;
    case 0x75:
      uVar64 = 0xc00;
      goto LAB_00c266dc;
    case 0x76:
    case 0x79:
    case 0x97:
    case 0x9a:
      uVar64 = *(undefined4 *)(pplVar53 + 5);
      goto LAB_00c266dc;
    case 0x77:
    case 0x98:
      uStack_5448 = (long *)CONCAT44(uStack_5448._4_4_,
                                     *(uint *)(pplVar53 + 5) | *(uint *)(pplVar53 + -8));
      break;
    case 0x78:
    case 0x99:
      uStack_5448 = (long *)((ulong)uStack_5448._4_4_ << 0x20);
      break;
    case 0x7a:
      pplVar16 = (long **)SHC_PoolAllocator::allocate(*local_54d0,0x30);
      plVar41 = pplVar53[5];
      plVar56 = pplVar53[8];
      plVar21 = pplVar53[7];
      plVar58 = pplVar53[10];
      plVar13 = pplVar53[9];
      pplVar16[1] = pplVar53[6];
      *pplVar16 = plVar41;
      pplVar16[3] = plVar56;
      pplVar16[2] = plVar21;
      pplVar16[5] = plVar58;
      pplVar16[4] = plVar13;
      *local_54d8 = (long *)0x0;
      local_54d8[1] = (long *)0x0;
      auStack_5438 = (undefined  [8])pplVar16;
      uVar37 = local_5504;
      break;
    case 0x7c:
      GISLParserUtil::ir_get_decl_type_noarray
                ((GISLParserUtil *)pplVar53[-0x24],(AST_TypedNode *)local_54b0,
                 (GISLParserContext *)in_x2);
      uVar48 = GISLParserContext::inplaceVariableQualifierErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0xd),
                          (SHC_Type *)local_c0,false,false);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      uVar48 = GISLParserContext::nonInitErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0xd),
                          (SHC_String *)pplVar53[-0xb],(SHC_String *)pplVar53[5],
                          (SHC_Type *)local_c0);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      in_x2 = (char *)0x0;
      pGVar19 = (GsTSymbol *)
                GsTSymbolTable::find
                          ((GsTSymbolTable *)*local_54b0,(SHC_String *)pplVar53[-0xb],(bool *)0x0,
                           (bool *)0x0);
      plVar41 = pplVar53[-0x24];
      if (pGVar19 != (GsTSymbol *)0x0) {
        in_x2 = (char *)0x0;
        plVar41 = (long *)GISLParserUtil::ir_grow_declaration
                                    ((AST_TypedNode *)plVar41,pGVar19,(AST_TypedNode *)0x0,
                                     (GISLParserContext *)local_54b0);
      }
      goto LAB_00c265b8;
    case 0x7d:
      pplVar16 = pplVar53 + -0x3e;
      GISLParserUtil::ir_get_decl_type_noarray
                ((GISLParserUtil *)*pplVar16,(AST_TypedNode *)local_54b0,(GISLParserContext *)in_x2)
      ;
      uVar48 = GISLParserContext::inplaceVariableQualifierErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0x27),
                          (SHC_Type *)local_c0,true,false);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      in_x2 = local_c0;
      uVar48 = GISLParserContext::arrayTypeErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0x1a),
                          (SHC_Type *)in_x2);
      if ((uVar48 & 1) == 0) {
        in_x2 = (char *)pplVar53[-0x25];
        uVar48 = GISLParserContext::arrayErrorCheck
                           ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0x1a),
                            (SHC_String *)in_x2,(SHC_String *)pplVar53[5],(SHC_Type *)local_c0,
                            (GsTVariable **)&local_5488);
        if ((uVar48 & 1) != 0) {
          GISLParserContext::recover();
        }
        plVar41 = local_5488;
        if (local_5488 == (long *)0x0) {
          plStack_5458 = *pplVar16;
          uVar37 = local_5504;
        }
        else {
          lVar14 = IR_TypeSet::getArrayType((IR_TypeSet *)local_5488[5],(IR_Type *)local_5488[6],0);
          plVar41[10] = 0;
          plVar41[6] = lVar14;
          in_x2 = (char *)0x0;
          plStack_5458 = (long *)GISLParserUtil::ir_grow_declaration
                                           ((AST_TypedNode *)*pplVar16,(GsTSymbol *)local_5488,
                                            (AST_TypedNode *)0x0,(GISLParserContext *)local_54b0);
          uVar37 = local_5504;
        }
      }
      else {
        GISLParserContext::recover();
        uVar37 = local_5504;
      }
      break;
    case 0x7e:
      GISLParserUtil::ir_get_decl_type_noarray
                ((GISLParserUtil *)pplVar53[-0x4b],(AST_TypedNode *)local_54b0,
                 (GISLParserContext *)in_x2);
      uVar48 = GISLParserContext::inplaceVariableQualifierErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0x34),
                          (SHC_Type *)local_c0,true,false);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      pplVar16 = pplVar53 + -0x27;
      in_x2 = local_c0;
      uVar48 = GISLParserContext::arrayTypeErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)pplVar16,(SHC_Type *)in_x2
                         );
      if ((uVar48 & 1) == 0) {
        uVar48 = GISLParserContext::arraySizeErrorCheck
                           ((GISLParserContext *)local_54b0,(GsTSourceLoc *)pplVar16,
                            (AST_TypedNode *)pplVar53[-0x17],local_5490);
        if ((uVar48 & 1) != 0) {
          GISLParserContext::recover();
        }
        uVar39 = IR_TypeSet::getArrayType
                           ((IR_TypeSet *)local_c0,(IR_Type *)CONCAT44(uStack_b4,uStack_b8),
                            local_5490[0]);
        uStack_b8 = (undefined4)uVar39;
        uStack_b4 = (undefined4)((ulong)uVar39 >> 0x20);
        in_x2 = (char *)pplVar53[-0x32];
        plStack_98 = (long *)0x0;
        uVar48 = GISLParserContext::arrayErrorCheck
                           ((GISLParserContext *)local_54b0,(GsTSourceLoc *)pplVar16,
                            (SHC_String *)in_x2,(SHC_String *)pplVar53[5],(SHC_Type *)local_c0,
                            (GsTVariable **)&local_5488);
        if ((uVar48 & 1) != 0) {
          GISLParserContext::recover();
        }
        plVar41 = pplVar53[-0x4b];
        if (local_5488 != (long *)0x0) {
          in_x2 = (char *)0x0;
          plVar41 = (long *)GISLParserUtil::ir_grow_declaration
                                      ((AST_TypedNode *)plVar41,(GsTSymbol *)local_5488,
                                       (AST_TypedNode *)0x0,(GISLParserContext *)local_54b0);
        }
        goto LAB_00c265b8;
      }
      GISLParserContext::recover();
      uVar37 = local_5504;
      break;
    case 0x7f:
      GISLParserUtil::ir_get_decl_type_noarray
                ((GISLParserUtil *)pplVar53[-0x58],(AST_TypedNode *)local_54b0,
                 (GISLParserContext *)in_x2);
      uVar48 = GISLParserContext::inplaceVariableQualifierErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0x41),
                          (SHC_Type *)local_c0,true,true);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      local_5488 = (long *)0x0;
      uVar48 = GISLParserContext::arrayTypeErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0x34),
                          (SHC_Type *)local_c0);
      if (((uVar48 & 1) != 0) ||
         (uVar48 = GISLParserContext::arrayErrorCheck
                             ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0x34),
                              (SHC_String *)pplVar53[-0x3f],(SHC_Type *)local_c0,
                              (GsTVariable **)&local_5488), (uVar48 & 1) != 0)) {
        GISLParserContext::recover();
      }
      pplVar16 = pplVar53 + 3;
      uVar39 = IR_TypeSet::getArrayType
                         ((IR_TypeSet *)local_c0,(IR_Type *)CONCAT44(uStack_b4,uStack_b8),
                          *(uint *)((*pplVar16)[4] + 0x10));
      uStack_b8 = (undefined4)uVar39;
      uStack_b4 = (undefined4)((ulong)uVar39 >> 0x20);
      in_x2 = (char *)pplVar53[-0x40];
      plStack_98 = (long *)0x0;
      uVar48 = GISLParserContext::executeInitializer
                         (GVar23,(SHC_String *)pplVar53[-0x41],(SHC_String *)in_x2,
                          (SHC_Type *)pplVar53[-0x3f],(AST_TypedNode **)pplVar53[-0x15],
                          (AST_SymbolNode **)local_c0,(GsTVariable *)pplVar16,(char)local_5490,
                          local_5488);
      if ((uVar48 & 1) == 0) {
        plVar41 = pplVar53[-0x58];
        if (local_5488 != (long *)0x0) {
          in_x2 = (char *)*pplVar16;
          plVar41 = (long *)GISLParserUtil::ir_grow_declaration
                                      ((AST_TypedNode *)plVar41,(GsTSymbol *)local_5488,
                                       (AST_TypedNode *)in_x2,(GISLParserContext *)local_54b0);
        }
      }
      else {
        GISLParserContext::recover();
        plVar41 = (long *)0x0;
      }
      goto LAB_00c265b8;
    case 0x80:
      GISLParserUtil::ir_get_decl_type_noarray
                ((GISLParserUtil *)pplVar53[-0x65],(AST_TypedNode *)local_54b0,
                 (GISLParserContext *)in_x2);
      uVar48 = GISLParserContext::inplaceVariableQualifierErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0x4e),
                          (SHC_Type *)local_c0,true,true);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      pplVar16 = pplVar53 + -0x41;
      local_5488 = (long *)0x0;
      uVar48 = GISLParserContext::arrayTypeErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)pplVar16,
                          (SHC_Type *)local_c0);
      if ((uVar48 & 1) == 0) {
        uVar48 = GISLParserContext::arraySizeErrorCheck
                           ((GISLParserContext *)local_54b0,(GsTSourceLoc *)pplVar16,
                            (AST_TypedNode *)pplVar53[-0x31],&local_5494);
        if ((uVar48 & 1) != 0) {
          GISLParserContext::recover();
        }
        uVar39 = IR_TypeSet::getArrayType
                           ((IR_TypeSet *)local_c0,(IR_Type *)CONCAT44(uStack_b4,uStack_b8),
                            local_5494);
        uStack_b8 = (undefined4)uVar39;
        uStack_b4 = (undefined4)((ulong)uVar39 >> 0x20);
        plStack_98 = (long *)0x0;
        uVar48 = GISLParserContext::arrayErrorCheck
                           ((GISLParserContext *)local_54b0,(GsTSourceLoc *)pplVar16,
                            (SHC_String *)pplVar53[-0x4c],(SHC_String *)pplVar53[-0x15],
                            (SHC_Type *)local_c0,(GsTVariable **)&local_5488);
        if ((uVar48 & 1) != 0) goto LAB_00c23798;
      }
      else {
LAB_00c23798:
        GISLParserContext::recover();
      }
      in_x2 = (char *)pplVar53[-0x4d];
      uVar48 = GISLParserContext::executeInitializer
                         (GVar23,(SHC_String *)pplVar53[-0x4e],(SHC_String *)in_x2,
                          (SHC_Type *)pplVar53[-0x4c],(AST_TypedNode **)pplVar53[-0x15],
                          (AST_SymbolNode **)local_c0,(GsTVariable *)(pplVar53 + 3),(char)local_5490
                          ,local_5488);
      if ((uVar48 & 1) == 0) {
        plVar41 = pplVar53[-0x65];
        if (local_5488 != (long *)0x0) {
          in_x2 = (char *)pplVar53[3];
          plVar41 = (long *)GISLParserUtil::ir_grow_declaration
                                      ((AST_TypedNode *)plVar41,(GsTSymbol *)local_5488,
                                       (AST_TypedNode *)in_x2,(GISLParserContext *)local_54b0);
        }
      }
      else {
        GISLParserContext::recover();
        plVar41 = (long *)0x0;
      }
      goto LAB_00c265b8;
    case 0x81:
      pplVar46 = pplVar53 + -0x3e;
      GISLParserUtil::ir_get_decl_type_noarray
                ((GISLParserUtil *)*pplVar46,(AST_TypedNode *)local_54b0,(GISLParserContext *)in_x2)
      ;
      pplVar16 = pplVar53 + -0x27;
      uVar48 = GISLParserContext::inplaceVariableQualifierErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)pplVar16,
                          (SHC_Type *)local_c0,false,true);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      if (*(int *)CONCAT44(uStack_b4,uStack_b8) == 7) {
        plStack_5458 = *pplVar46;
        in_x2 = (char *)pplVar53[-0x25];
        uVar48 = GISLParserContext::nonInitErrorCheck
                           ((GISLParserContext *)local_54b0,(GsTSourceLoc *)pplVar16,
                            (SHC_String *)in_x2,(SHC_String *)pplVar53[-0x15],(SHC_Type *)local_c0);
        uVar37 = local_5504;
        if ((uVar48 & 1) != 0) {
          GISLParserContext::recover();
        }
      }
      else {
        in_x2 = (char *)pplVar53[-0x26];
        uVar48 = GISLParserContext::executeInitializer
                           (GVar23,(SHC_String *)*pplVar16,(SHC_String *)in_x2,
                            (SHC_Type *)pplVar53[-0x25],(AST_TypedNode **)pplVar53[-0x15],
                            (AST_SymbolNode **)local_c0,(GsTVariable *)(pplVar53 + 3),
                            (char)&local_5488,0);
        if ((uVar48 & 1) == 0) {
          in_x2 = (char *)0x0;
          pGVar19 = (GsTSymbol *)
                    GsTSymbolTable::find
                              ((GsTSymbolTable *)*local_54b0,(SHC_String *)pplVar53[-0x25],
                               (bool *)0x0,(bool *)0x0);
          plVar41 = *pplVar46;
          if (pGVar19 != (GsTSymbol *)0x0) {
            in_x2 = (char *)pplVar53[3];
            plVar41 = (long *)GISLParserUtil::ir_grow_declaration
                                        ((AST_TypedNode *)plVar41,pGVar19,(AST_TypedNode *)in_x2,
                                         (GISLParserContext *)local_54b0);
          }
          plStack_5458 = plVar41;
          uVar37 = local_5504;
        }
        else {
          GISLParserContext::recover();
          plStack_5458 = (long *)0x0;
          uVar37 = local_5504;
        }
      }
      break;
    case 0x82:
      uVar48 = GISLParserContext::inplaceVariableQualifierErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0xd),
                          (SHC_Type *)(pplVar53 + -0x15),false,false);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      GISLParserContext::nonInitErrorCheck
                ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0xd),
                 (SHC_String *)pplVar53[-0xb],(SHC_String *)pplVar53[5],
                 (SHC_Type *)(pplVar53 + -0x15));
      in_x2 = (char *)0x0;
      pGVar10 = (GISLParserUtil *)
                GsTSymbolTable::find
                          ((GsTSymbolTable *)*local_54b0,(SHC_String *)pplVar53[-0xb],(bool *)0x0,
                           (bool *)0x0);
      if (pGVar10 == (GISLParserUtil *)0x0) {
        plStack_5458 = (long *)0x0;
        uVar37 = local_5504;
      }
      else {
        in_x2 = (char *)pplVar53[-0xd];
        plStack_5458 = (long *)GISLParserUtil::ir_add_declaration
                                         (pGVar10,(GsTSymbol *)0x0,(AST_TypedNode *)in_x2,
                                          (GsTSourceLoc)pplVar53[-0xc],
                                          (GISLParserContext *)local_54b0);
        uVar37 = local_5504;
      }
      break;
    case 0x83:
      pplVar46 = pplVar53 + -0x2f;
      uVar48 = GISLParserContext::inplaceVariableQualifierErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0x27),
                          (SHC_Type *)pplVar46,true,false);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      uVar48 = GISLParserContext::arrayTypeErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0x1a),
                          (SHC_Type *)pplVar46);
      if ((uVar48 & 1) == 0) {
        plVar41 = (long *)IR_TypeSet::getArrayType
                                    ((IR_TypeSet *)*pplVar46,(IR_Type *)pplVar53[-0x2e],0);
        pplVar53[-0x2e] = plVar41;
        pplVar53[-0x2a] = (long *)0x0;
        uVar48 = GISLParserContext::arrayErrorCheck
                           ((GISLParserContext *)pplVar16,(GsTSourceLoc *)(pplVar53 + -0x1a),
                            (SHC_String *)pplVar53[-0x25],(SHC_String *)pplVar53[5],
                            (SHC_Type *)pplVar46,(GsTVariable **)local_c0);
        if ((uVar48 & 1) != 0) goto LAB_00c23884;
      }
      else {
LAB_00c23884:
        GISLParserContext::recover();
      }
      in_x2 = (char *)0x0;
      pGVar10 = (GISLParserUtil *)
                GsTSymbolTable::find
                          ((GsTSymbolTable *)*pplVar16,(SHC_String *)pplVar53[-0x25],(bool *)0x0,
                           (bool *)0x0);
      param_2 = (GISLParserContext *)local_54b0;
      if (pGVar10 == (GISLParserUtil *)0x0) {
        plStack_5458 = (long *)0x0;
        uVar37 = local_5504;
      }
      else {
        in_x2 = (char *)pplVar53[-0x27];
        plStack_5458 = (long *)GISLParserUtil::ir_add_declaration
                                         (pGVar10,(GsTSymbol *)0x0,(AST_TypedNode *)in_x2,
                                          (GsTSourceLoc)pplVar53[-0x26],
                                          (GISLParserContext *)pplVar16);
        uVar37 = local_5504;
      }
      break;
    case 0x84:
      pplVar46 = pplVar53 + -0x3c;
      uVar48 = GISLParserContext::inplaceVariableQualifierErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0x34),
                          (SHC_Type *)pplVar46,true,false);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      pplVar55 = pplVar53 + -0x27;
      in_x2 = (char *)pplVar46;
      uVar48 = GISLParserContext::arrayTypeErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)pplVar55,
                          (SHC_Type *)pplVar46);
      if ((uVar48 & 1) == 0) {
        uVar48 = GISLParserContext::arraySizeErrorCheck
                           ((GISLParserContext *)local_54b0,(GsTSourceLoc *)pplVar55,
                            (AST_TypedNode *)pplVar53[-0x17],(uint *)&local_5488);
        if ((uVar48 & 1) != 0) {
          GISLParserContext::recover();
        }
        plVar41 = (long *)IR_TypeSet::getArrayType
                                    ((IR_TypeSet *)*pplVar46,(IR_Type *)pplVar53[-0x3b],
                                     (uint)local_5488);
        pplVar53[-0x3b] = plVar41;
        in_x2 = (char *)pplVar53[-0x32];
        pplVar53[-0x37] = (long *)0x0;
        uVar48 = GISLParserContext::arrayErrorCheck
                           ((GISLParserContext *)pplVar16,(GsTSourceLoc *)pplVar55,
                            (SHC_String *)in_x2,(SHC_String *)pplVar53[5],(SHC_Type *)pplVar46,
                            (GsTVariable **)local_c0);
        if ((uVar48 & 1) != 0) {
          GISLParserContext::recover();
        }
        plVar41 = (long *)local_c0;
        if (local_c0 != (undefined  [8])0x0) {
          in_x2 = (char *)pplVar53[-0x34];
          plVar41 = (long *)GISLParserUtil::ir_add_declaration
                                      ((GISLParserUtil *)local_c0,(GsTSymbol *)0x0,
                                       (AST_TypedNode *)in_x2,(GsTSourceLoc)pplVar53[-0x33],
                                       (GISLParserContext *)pplVar16);
        }
        goto LAB_00c265b8;
      }
      GISLParserContext::recover();
      uVar37 = local_5504;
      break;
    case 0x85:
      pplVar55 = pplVar53 + -0x41;
      pplVar46 = pplVar53 + -0x49;
      uVar48 = GISLParserContext::inplaceVariableQualifierErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)pplVar55,
                          (SHC_Type *)pplVar46,true,true);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      local_c0 = (undefined  [8])0x0;
      uVar48 = GISLParserContext::arrayTypeErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0x34),
                          (SHC_Type *)pplVar46);
      if ((uVar48 & 1) == 0) {
        plVar41 = (long *)IR_TypeSet::getArrayType
                                    ((IR_TypeSet *)*pplVar46,(IR_Type *)pplVar53[-0x48],
                                     *(uint *)(pplVar53[3][4] + 0x10));
        pplVar53[-0x48] = plVar41;
        pplVar53[-0x44] = (long *)0x0;
        uVar48 = GISLParserContext::arrayErrorCheck
                           ((GISLParserContext *)pplVar16,(GsTSourceLoc *)(pplVar53 + -0x34),
                            (SHC_String *)pplVar53[-0x3f],(SHC_String *)pplVar53[-0x15],
                            (SHC_Type *)pplVar46,(GsTVariable **)local_c0);
        if ((uVar48 & 1) != 0) goto LAB_00c241d8;
      }
      else {
LAB_00c241d8:
        GISLParserContext::recover();
      }
      lVar14 = -0x200;
      lVar47 = -0x1f8;
      goto LAB_00c241e8;
    case 0x86:
      pplVar55 = pplVar53 + -0x4e;
      pplVar46 = pplVar53 + -0x56;
      uVar48 = GISLParserContext::inplaceVariableQualifierErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)pplVar55,
                          (SHC_Type *)pplVar46,true,true);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      pplVar40 = pplVar53 + -0x41;
      local_c0 = (undefined  [8])0x0;
      uVar48 = GISLParserContext::arrayTypeErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)pplVar40,
                          (SHC_Type *)pplVar46);
      if ((uVar48 & 1) == 0) {
        uVar48 = GISLParserContext::arraySizeErrorCheck
                           ((GISLParserContext *)local_54b0,(GsTSourceLoc *)pplVar40,
                            (AST_TypedNode *)pplVar53[-0x31],(uint *)&local_5488);
        if ((uVar48 & 1) != 0) {
          GISLParserContext::recover();
        }
        plVar41 = (long *)IR_TypeSet::getArrayType
                                    ((IR_TypeSet *)*pplVar46,(IR_Type *)pplVar53[-0x55],
                                     (uint)local_5488);
        pplVar53[-0x55] = plVar41;
        pplVar53[-0x51] = (long *)0x0;
        uVar48 = GISLParserContext::arrayErrorCheck
                           ((GISLParserContext *)pplVar16,(GsTSourceLoc *)pplVar40,
                            (SHC_String *)pplVar53[-0x4c],(SHC_String *)pplVar53[-0x15],
                            (SHC_Type *)pplVar46,(GsTVariable **)local_c0);
        if ((uVar48 & 1) != 0) goto LAB_00c239ec;
      }
      else {
LAB_00c239ec:
        GISLParserContext::recover();
      }
      lVar14 = -0x268;
      lVar47 = -0x260;
LAB_00c241e8:
      in_x2 = *(char **)((long)pplVar53 + lVar14);
      uVar48 = GISLParserContext::executeInitializer
                         (GVar23,(SHC_String *)*pplVar55,(SHC_String *)in_x2,
                          *(SHC_Type **)((long)pplVar53 + lVar47),(AST_TypedNode **)pplVar53[-0x15],
                          (AST_SymbolNode **)pplVar46,(GsTVariable *)(pplVar53 + 3),
                          (char)&local_5488,local_c0);
      if ((uVar48 & 1) == 0) {
        if (local_c0 != (undefined  [8])0x0) {
          in_x2 = (char *)pplVar53[-0xd];
          plVar41 = (long *)GISLParserUtil::ir_add_declaration
                                      ((GISLParserUtil *)local_5488,(AST_SymbolNode *)pplVar53[3],
                                       (AST_TypedNode *)in_x2,(GsTSourceLoc)pplVar53[-0xc],
                                       (GISLParserContext *)pplVar16);
          goto LAB_00c265b8;
        }
      }
      else {
        GISLParserContext::recover();
      }
      plVar41 = (long *)0x0;
      goto LAB_00c265b8;
    case 0x87:
      pplVar16 = pplVar53 + -0x27;
      pplVar46 = pplVar53 + -0x2f;
      uVar48 = GISLParserContext::inplaceVariableQualifierErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)pplVar16,
                          (SHC_Type *)pplVar46,false,true);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      if (*(int *)pplVar53[-0x2e] != 7) {
        in_x2 = (char *)pplVar53[-0x26];
        uVar48 = GISLParserContext::executeInitializer
                           (GVar23,(SHC_String *)*pplVar16,(SHC_String *)in_x2,
                            (SHC_Type *)pplVar53[-0x25],(AST_TypedNode **)pplVar53[-0x15],
                            (AST_SymbolNode **)pplVar46,(GsTVariable *)(pplVar53 + 3),cVar5 + -0x60,
                            0);
        if ((uVar48 & 1) == 0) {
          plVar41 = (long *)local_c0;
          if (local_c0 != (undefined  [8])0x0) {
            in_x2 = (char *)pplVar53[-0xd];
            plVar41 = (long *)GISLParserUtil::ir_add_declaration
                                        ((GISLParserUtil *)local_c0,(AST_SymbolNode *)pplVar53[3],
                                         (AST_TypedNode *)in_x2,(GsTSourceLoc)pplVar53[-0xc],
                                         (GISLParserContext *)local_54b0);
          }
        }
        else {
          GISLParserContext::recover();
          plVar41 = (long *)0x0;
        }
        goto LAB_00c265b8;
      }
      uVar48 = GISLParserContext::nonInitErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)pplVar16,
                          (SHC_String *)pplVar53[-0x25],(SHC_String *)pplVar53[-0x15],
                          (SHC_Type *)pplVar46);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      in_x2 = (char *)0x0;
      pGVar10 = (GISLParserUtil *)
                GsTSymbolTable::find
                          ((GsTSymbolTable *)*local_54b0,(SHC_String *)pplVar53[-0x25],(bool *)0x0,
                           (bool *)0x0);
      if (pGVar10 == (GISLParserUtil *)0x0) {
        plStack_5458 = (long *)0x0;
        uVar37 = local_5504;
      }
      else {
        in_x2 = (char *)*pplVar16;
        plStack_5458 = (long *)GISLParserUtil::ir_add_declaration
                                         (pGVar10,(GsTSymbol *)0x0,(AST_TypedNode *)in_x2,
                                          (GsTSourceLoc)pplVar53[-0x26],
                                          (GISLParserContext *)local_54b0);
        uVar37 = local_5504;
      }
      break;
    case 0x88:
      in_x2 = (char *)pplVar53[-0x19];
      uVar48 = GISLParserContext::executeInitializer
                         (GVar23,(SHC_String *)pplVar53[-0x1a],(SHC_String *)in_x2,
                          (SHC_Type *)pplVar53[-0x18],(AST_TypedNode **)0x0,
                          (AST_SymbolNode **)(pplVar53[3] + 3),(GsTVariable *)(pplVar53 + 3),
                          cVar5 + -0x60,0);
      if ((uVar48 & 1) == 0) {
        plVar41 = (long *)local_c0;
        if (local_c0 != (undefined  [8])0x0) {
          in_x2 = (char *)pplVar53[-0xd];
          plVar41 = (long *)GISLParserUtil::ir_add_declaration
                                      ((GISLParserUtil *)local_c0,(AST_SymbolNode *)pplVar53[3],
                                       (AST_TypedNode *)in_x2,(GsTSourceLoc)pplVar53[-0xc],
                                       (GISLParserContext *)local_54b0);
        }
      }
      else {
        GISLParserContext::recover();
        plVar41 = (long *)0x0;
      }
      goto LAB_00c265b8;
    case 0x89:
      pplVar16 = pplVar53 + 5;
      in_x2 = (char *)pplVar16;
      uVar48 = GISLParserContext::typeQualifierErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + 8),
                          (SHC_Type *)pplVar16,(IR_QualFlags *)(pplVar53 + -8));
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      plVar56 = pplVar53[7];
      plVar21 = pplVar53[10];
      plVar41 = pplVar53[9];
      plVar58 = pplVar53[6];
      plVar13 = *pplVar16;
      uVar64 = *(undefined4 *)(pplVar53 + -8);
      local_54d8[3] = pplVar53[8];
      local_54d8[2] = plVar56;
      local_54d8[5] = plVar21;
      local_54d8[4] = plVar41;
      local_54d8[1] = plVar58;
      *local_54d8 = plVar13;
      auStack_5438 = (undefined  [8])CONCAT44(auStack_5438._4_4_,uVar64);
      uVar37 = local_5504;
      break;
    case 0x8a:
      plVar13 = pplVar53[10];
      plVar41 = pplVar53[9];
      plVar58 = pplVar53[7];
      plVar56 = pplVar53[6];
      plVar21 = pplVar53[5];
      local_54d8[3] = pplVar53[8];
      local_54d8[2] = plVar58;
      local_54d8[5] = plVar13;
      local_54d8[4] = plVar41;
      pplVar16 = local_54d8;
      goto LAB_00c255cc;
    case 0x8b:
      in_x2 = (char *)(pplVar53 + -0x22);
      plVar56 = pplVar53[-0x20];
      plVar21 = pplVar53[-0x1d];
      plVar41 = pplVar53[-0x1e];
      plVar58 = pplVar53[-0x21];
      plVar13 = *(long **)in_x2;
      local_54d8[3] = pplVar53[-0x1f];
      local_54d8[2] = plVar56;
      local_54d8[5] = plVar21;
      local_54d8[4] = plVar41;
      local_54d8[1] = plVar58;
      *local_54d8 = plVar13;
      uVar48 = GISLParserContext::arrayTypeErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0x1a),
                          (SHC_Type *)in_x2);
      if ((uVar48 & 1) == 0) {
        plVar41 = pplVar53[-10];
        goto LAB_00c26a28;
      }
      GISLParserContext::recover();
      uVar37 = local_5504;
      break;
    case 0x8c:
      in_x2 = (char *)(pplVar53 + -0x15);
      plVar21 = pplVar53[-0x10];
      plVar41 = pplVar53[-0x11];
      plVar56 = pplVar53[-0x13];
      plVar58 = pplVar53[-0x14];
      plVar13 = pplVar53[-0x15];
      local_54d8[3] = pplVar53[-0x12];
      local_54d8[2] = plVar56;
      local_54d8[5] = plVar21;
      local_54d8[4] = plVar41;
      local_54d8[1] = plVar58;
      *local_54d8 = plVar13;
      uVar48 = GISLParserContext::arrayTypeErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0xd),
                          (SHC_Type *)in_x2);
      if ((uVar48 & 1) != 0) goto LAB_00c25528;
      in_x2 = (char *)0x0;
      local_5440 = (long *)IR_TypeSet::getArrayType
                                     ((IR_TypeSet *)uStack_5448,(IR_Type *)local_5440,0);
LAB_00c26b78:
      local_5420 = (long *)0x0;
      uVar37 = local_5504;
      break;
    case 0x8d:
      plVar56 = pplVar53[-6];
      plVar21 = pplVar53[-3];
      plVar41 = pplVar53[-4];
      in_x2 = (char *)(pplVar53 + -8);
      plVar58 = pplVar53[-7];
      plVar13 = pplVar53[-8];
      local_54d8[3] = pplVar53[-5];
      local_54d8[2] = plVar56;
      local_54d8[5] = plVar21;
      local_54d8[4] = plVar41;
      local_54d8[1] = plVar58;
      *local_54d8 = plVar13;
      uVar48 = GISLParserContext::pointerTypeErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)pplVar53,(SHC_Type *)in_x2
                         );
      if ((uVar48 & 1) == 0) {
        local_5440 = (long *)IR_TypeSet::getPointerType
                                       ((IR_TypeSet *)uStack_5448,(IR_Type *)local_5440);
        goto LAB_00c26b78;
      }
LAB_00c25528:
      GISLParserContext::recover();
      uVar37 = local_5504;
      break;
    case 0x8e:
      GVar20 = 0;
      goto LAB_00c25548;
    case 0x8f:
      GVar20 = 1;
      goto LAB_00c25548;
    case 0x90:
      GVar20 = 2;
LAB_00c25548:
      lVar14 = **local_54b0;
      lVar47 = (*local_54b0)[1];
      plVar41 = (long *)*local_54b0[0xb];
      local_54e8[1] = 0;
      local_54e8[2] = 0;
      *local_54e8 = 0;
      local_5440 = (long *)IR_TypeSet::getScalarType((IR_TypeSet *)plVar41,GVar20);
      plVar56 = pplVar53[1];
      plVar21 = *pplVar53;
      auStack_5438 = (undefined  [8])CONCAT44(auStack_5438._4_4_,(uint)(lVar47 - lVar14 == 0x18));
      uStack_5448 = plVar41;
      local_54f0[1] = (long *)CONCAT44(uStack_b4,uStack_b8);
      *local_54f0 = (long *)local_c0;
      *(ulong *)((long)local_54f0 + 0x14) = CONCAT44(uStack_a8,uStack_ac);
      *(ulong *)((long)local_54f0 + 0xc) = CONCAT44(uStack_b0,uStack_b4);
      pplVar16 = local_54e0;
      uVar37 = local_5504;
LAB_00c255cc:
      pplVar16[1] = plVar56;
      *pplVar16 = plVar21;
      break;
    case 0x91:
      in_x2 = (char *)*local_54d0;
      SHC_Type::copyType((SHC_Type *)local_54d8,(SHC_Type *)(pplVar53 + 4),
                         (SHC_PoolAllocator *)in_x2);
      plVar21 = pplVar53[1];
      plVar41 = *pplVar53;
      uVar37 = local_5504;
      goto LAB_00c2571c;
    case 0x92:
      lVar14 = SHC_Type::clone((SHC_Type *)(pplVar53 + -8),*local_54d0);
      SHC_Type::copyType((SHC_Type *)local_54d8,(SHC_Type *)(pplVar53 + -0x23),*local_54d0);
      in_x2 = local_c0;
      plVar41 = pplVar53[-0x27];
      local_54e0[1] = pplVar53[-0x26];
      *local_54e0 = plVar41;
      local_c0 = *(undefined (*) [8])((long)local_5440 + 0x14);
      local_5440 = (long *)IR_TypeSet::getTextureType
                                     ((IR_TypeSet *)uStack_5448,*(IR_TextureDim *)(local_5440 + 2),
                                      (IR_TextureInfo *)in_x2,*(IR_Type **)(lVar14 + 8));
      goto LAB_00c25a58;
    case 0x93:
      plVar41 = pplVar53[-7];
      plVar56 = *(long **)*local_54d0;
      local_5488._0_4_ = (int)((ulong)local_5488 >> 0x10) << 0x10;
      goto LAB_00c25668;
    case 0x94:
      plVar41 = pplVar53[-7];
      plVar56 = *(long **)*local_54d0;
      local_5488 = (long *)CONCAT62(local_5488._2_6_,1);
LAB_00c25668:
      local_54e8[1] = 0;
      *local_54e8 = 0;
      in_x2 = (char *)&local_5488;
      local_5488 = (long *)(ulong)(uint)local_5488;
      local_5440 = (long *)IR_TypeSet::getTextureType
                                     ((IR_TypeSet *)plVar56,6,(IR_TextureInfo *)in_x2,
                                      (IR_Type *)plVar41);
      local_54f0[1] = (long *)CONCAT44(uStack_b4,uStack_b8);
      *local_54f0 = (long *)local_c0;
      plVar21 = pplVar53[-0x26];
      plVar41 = pplVar53[-0x27];
      auStack_5438 = (undefined  [8])((ulong)auStack_5438 & 0xffffffff00000000);
      uStack_5448 = plVar56;
      *(undefined4 *)(local_54f0 + 2) = uStack_b0;
      local_5420 = (long *)0x0;
      uVar37 = local_5504;
      goto LAB_00c2571c;
    case 0x95:
      plVar41 = pplVar53[3];
      plVar56 = (long *)plVar41[10];
      plVar21 = (long *)plVar41[9];
      plVar13 = (long *)plVar41[7];
      plVar61 = (long *)plVar41[6];
      plVar58 = (long *)plVar41[5];
      local_54d8[3] = (long *)plVar41[8];
      local_54d8[2] = plVar13;
      local_54d8[5] = plVar56;
      local_54d8[4] = plVar21;
      plVar21 = pplVar53[1];
      plVar41 = *pplVar53;
      local_54d8[1] = plVar61;
      *local_54d8 = plVar58;
      auStack_5438 = (undefined  [8])
                     CONCAT44(auStack_5438._4_4_,(uint)((*local_54b0)[1] - **local_54b0 == 0x18));
LAB_00c2571c:
      local_54e0[1] = plVar21;
      *local_54e0 = plVar41;
      break;
    case 0x96:
      uVar64 = 0x200;
LAB_00c266dc:
      uStack_5448 = (long *)CONCAT44(uStack_5448._4_4_,uVar64);
      break;
    case 0x9b:
      uVar48 = GISLParserContext::structDefQualifierErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0x27),
                          (IR_QualFlags *)(pplVar53 + -0x3c));
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      pplVar16 = pplVar53 + -0x25;
      in_x2 = (char *)(ulong)*(uint *)(pplVar53 + -0x3c);
      GISLParserContext::createStructType
                ((IR_Struct *)local_54b0,(IR_QualFlags)pplVar53[-8],(SHC_String *)in_x2,
                 (GsTSourceLoc *)*pplVar16);
      plVar41 = local_54b0[0xb];
      local_54d8[1] = (long *)CONCAT44(uStack_b4,uStack_b8);
      *local_54d8 = (long *)local_c0;
      local_54d8[3] = (long *)CONCAT44(uStack_a4,uStack_a8);
      local_54d8[2] = (long *)CONCAT44(uStack_ac,uStack_b0);
      local_54d8[5] = plStack_98;
      local_54d8[4] = local_a0;
      puVar17 = (undefined8 *)SHC_PoolAllocator::allocate((SHC_PoolAllocator *)plVar41,0x98);
      puVar17[1] = *pplVar16;
      puVar17[2] = 0;
      puVar17[4] = 0;
      *(undefined2 *)(puVar17 + 0xb) = 1;
      *puVar17 = &PTR__GsTSymbol_00fee830;
      plVar41 = *local_54d8;
      plVar56 = local_54d8[3];
      plVar21 = local_54d8[2];
      plVar58 = local_54d8[5];
      plVar13 = local_54d8[4];
      puVar17[6] = local_54d8[1];
      puVar17[5] = plVar41;
      puVar17[8] = plVar56;
      puVar17[7] = plVar21;
      puVar17[10] = plVar58;
      puVar17[9] = plVar13;
      uVar48 = GsTSymbolTable::insert((GsTSymbolTable *)*local_54b0,(GsTSymbol *)puVar17);
      uVar37 = local_5504;
      if ((uVar48 & 1) == 0) {
        plVar41 = *pplVar16;
        pSVar36 = (SHC_Type *)plVar41[2];
        in_x2 = (char *)pplVar53[-0x26];
        if (((byte)*(SHC_Type *)plVar41 & 1) == 0) {
          pSVar36 = (SHC_Type *)((long)plVar41 + 1);
        }
        GISLParserContext::error
                  (GVar23,(char *)pplVar53[-0x27],in_x2,"redefinition",pSVar36,"struct");
        GISLParserContext::recover();
      }
      break;
    case 0x9c:
      uStack_5448 = (long *)GISLParserContext::createEmptyStruct();
      in_x2 = (char *)pplVar53[0xb];
      GISLParserContext::addStructField
                ((GISLParserContext *)local_54b0,(IR_Struct *)uStack_5448,(SHC_String *)in_x2,
                 (SHC_Type *)(pplVar53 + 5),(SHC_String *)pplVar53[0xc]);
      uVar37 = local_5504;
      break;
    case 0x9d:
      in_x2 = (char *)pplVar53[0xb];
      uStack_5448 = pplVar53[-8];
      uVar48 = GISLParserContext::addStructField
                         ((GISLParserContext *)local_54b0,(IR_Struct *)uStack_5448,
                          (SHC_String *)in_x2,(SHC_Type *)(pplVar53 + 5),(SHC_String *)pplVar53[0xc]
                         );
      uVar37 = local_5504;
      if ((uVar48 & 1) == 0) {
        plVar21 = pplVar53[0xb];
        plVar41 = pplVar53[8];
        in_x2 = (char *)pplVar53[9];
        pcVar35 = "duplicate field name in structure:";
        pcVar25 = "struct";
        pSVar36 = (SHC_Type *)plVar21[2];
        if (((byte)*(SHC_Type *)plVar21 & 1) == 0) {
          pSVar36 = (SHC_Type *)((long)plVar21 + 1);
        }
LAB_00c257d8:
        GISLParserContext::error(GVar23,(char *)plVar41,in_x2,pcVar35,pcVar25,pSVar36);
LAB_00c25b4c:
        GISLParserContext::recover();
        uVar37 = local_5504;
      }
      break;
    case 0x9e:
      pplVar16 = pplVar53 + 5;
      in_x2 = (char *)pplVar16;
      uVar48 = GISLParserContext::inplaceStructFieldQualifierErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + 8),
                          (SHC_Type *)pplVar16);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      plVar56 = pplVar53[7];
      plVar21 = pplVar53[10];
      plVar41 = pplVar53[9];
      plVar58 = pplVar53[6];
      plVar13 = *pplVar16;
      local_54d8[3] = pplVar53[8];
      local_54d8[2] = plVar56;
      local_54d8[5] = plVar21;
      local_54d8[4] = plVar41;
      local_54d8[1] = plVar58;
      *local_54d8 = plVar13;
      uVar37 = local_5504;
      break;
    case 0x9f:
      plVar56 = pplVar53[-4];
      plVar21 = pplVar53[-1];
      plVar41 = pplVar53[-2];
      plVar58 = pplVar53[-7];
      plVar13 = pplVar53[-8];
      plVar62 = pplVar53[-5];
      plVar61 = pplVar53[-6];
      local_54d8[5] = pplVar53[-3];
      local_54d8[4] = plVar56;
      local_54d8[7] = plVar21;
      local_54d8[6] = plVar41;
      local_54d8[1] = plVar58;
      *local_54d8 = plVar13;
      local_54d8[3] = plVar62;
      local_54d8[2] = plVar61;
      uVar48 = GISLParserContext::voidErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0x12),
                          (SHC_String *)plStack_5418,(SHC_Type *)(pplVar53 + -0x15));
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      iVar54 = *(int *)pplVar53[-7];
      in_x2 = (char *)*local_54d0;
      SHC_Type::copyType((SHC_Type *)local_54d8,(SHC_Type *)(pplVar53 + -0x15),
                         (SHC_PoolAllocator *)in_x2);
      uVar37 = local_5504;
      if (iVar54 == 4) {
        uVar48 = GISLParserContext::arrayTypeErrorCheck
                           ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0x12),
                            (SHC_Type *)local_54d8);
        if ((uVar48 & 1) != 0) {
          GISLParserContext::recover();
        }
        in_x2 = (char *)(ulong)*(uint *)(pplVar53[-7] + 2);
        local_5440 = (long *)IR_TypeSet::getArrayType
                                       ((IR_TypeSet *)uStack_5448,(IR_Type *)local_5440,
                                        *(uint *)(pplVar53[-7] + 2));
        local_5420 = (long *)0x0;
      }
      break;
    case 0xa0:
      plVar21 = *(long **)*local_54d0;
      local_54e8[1] = 0;
      local_54e8[2] = 0;
      *local_54e8 = 0;
      local_5440 = (long *)IR_TypeSet::getScalarType((IR_TypeSet *)plVar21,0);
      plVar13 = pplVar53[1];
      plVar56 = *pplVar53;
      plVar41 = pplVar53[2];
      local_54f0[1] = (long *)CONCAT44(uStack_b4,uStack_b8);
      *local_54f0 = (long *)local_c0;
      *(ulong *)((long)local_54f0 + 0x14) = CONCAT44(uStack_a8,uStack_ac);
      *(ulong *)((long)local_54f0 + 0xc) = CONCAT44(uStack_b0,uStack_b4);
      plStack_5418 = plVar41;
      uStack_5448 = plVar21;
      local_54e0[1] = plVar13;
      *local_54e0 = plVar56;
      local_5410 = (long *)0x0;
      goto joined_r0x00c24340;
    case 0xa1:
      plVar56 = *(long **)*local_54d0;
      local_54e8[1] = 0;
      local_54e8[2] = 0;
      *local_54e8 = 0;
      local_5440 = (long *)IR_TypeSet::getScalarType((IR_TypeSet *)plVar56,0);
      plVar58 = pplVar53[-0x19];
      plVar13 = pplVar53[-0x1a];
      plVar41 = pplVar53[-0x18];
      local_54f0[1] = (long *)CONCAT44(uStack_b4,uStack_b8);
      *local_54f0 = (long *)local_c0;
      *(ulong *)((long)local_54f0 + 0x14) = CONCAT44(uStack_a8,uStack_ac);
      *(ulong *)((long)local_54f0 + 0xc) = CONCAT44(uStack_b0,uStack_b4);
      plVar21 = pplVar53[2];
      plStack_5418 = plVar41;
      uStack_5448 = plVar56;
      local_54e0[1] = plVar58;
      *local_54e0 = plVar13;
      local_5410 = plVar21;
joined_r0x00c24340:
      auStack_5438 = (undefined  [8])((ulong)auStack_5438 & 0xffffffff00000000);
      uVar37 = local_5504;
      break;
    case 0xa2:
      plVar21 = (long *)*local_54b0[0xb];
      local_54e8[1] = 0;
      local_54e8[2] = 0;
      *local_54e8 = 0;
      local_5440 = (long *)IR_TypeSet::getScalarType((IR_TypeSet *)plVar21,0);
      plVar41 = pplVar53[-10];
      auStack_5438 = (undefined  [8])((ulong)auStack_5438 & 0xffffffff00000000);
      uStack_5448 = plVar21;
      local_54f0[1] = (long *)CONCAT44(uStack_b4,uStack_b8);
      *local_54f0 = (long *)local_c0;
      *(ulong *)((long)local_54f0 + 0x14) = CONCAT44(uStack_a8,uStack_ac);
      *(ulong *)((long)local_54f0 + 0xc) = CONCAT44(uStack_b0,uStack_b4);
      plStack_5418 = pplVar53[-0x25];
      plVar21 = pplVar53[-0x27];
      local_54e0[1] = pplVar53[-0x26];
      *local_54e0 = plVar21;
      local_5410 = (long *)0x0;
LAB_00c26a28:
      uVar48 = GISLParserContext::arraySizeErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0x1a),
                          (AST_TypedNode *)plVar41,(uint *)local_c0);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      in_x2 = (char *)((ulong)local_c0 & 0xffffffff);
      local_5440 = (long *)IR_TypeSet::getArrayType
                                     ((IR_TypeSet *)uStack_5448,(IR_Type *)local_5440,local_c0._0_4_
                                     );
      local_5420 = (long *)0x0;
      uVar37 = local_5504;
      break;
    case 0xa3:
      plVar21 = *(long **)*local_54d0;
      local_54e8[1] = 0;
      local_54e8[2] = 0;
      *local_54e8 = 0;
      local_5440 = (long *)IR_TypeSet::getScalarType((IR_TypeSet *)plVar21,0);
      plVar13 = pplVar53[-0x19];
      plVar56 = pplVar53[-0x1a];
      in_x2 = (char *)0x0;
      auStack_5438 = (undefined  [8])((ulong)auStack_5438 & 0xffffffff00000000);
      plVar41 = pplVar53[-0x18];
      local_54f0[1] = (long *)CONCAT44(uStack_b4,uStack_b8);
      *local_54f0 = (long *)local_c0;
      *(ulong *)((long)local_54f0 + 0x14) = CONCAT44(uStack_a8,uStack_ac);
      *(ulong *)((long)local_54f0 + 0xc) = CONCAT44(uStack_b0,uStack_b4);
      plStack_5418 = plVar41;
      local_54e0[1] = plVar13;
      *local_54e0 = plVar56;
      local_5410 = (long *)0x0;
      uStack_5448 = plVar21;
      local_5440 = (long *)IR_TypeSet::getArrayType((IR_TypeSet *)plVar21,(IR_Type *)local_5440,0);
LAB_00c25a58:
      local_5420 = (long *)0x0;
      uVar37 = local_5504;
      break;
    case 0xa4:
      plVar41 = (long *)*local_54b0[0xb];
      local_54e8[1] = 0;
      local_54e8[2] = 0;
      *local_54e8 = 0;
      local_5440 = (long *)IR_TypeSet::getScalarType((IR_TypeSet *)plVar41,0);
      uStack_5448 = plVar41;
      plVar41 = pplVar53[-0x24];
      auStack_5438 = (undefined  [8])((ulong)auStack_5438 & 0xffffffff00000000);
      local_54f0[1] = (long *)CONCAT44(uStack_b4,uStack_b8);
      *local_54f0 = (long *)local_c0;
      plVar21 = pplVar53[-0x3f];
      *(ulong *)((long)local_54f0 + 0x14) = CONCAT44(uStack_a8,uStack_ac);
      *(ulong *)((long)local_54f0 + 0xc) = CONCAT44(uStack_b0,uStack_b4);
      plVar56 = pplVar53[-0x41];
      plStack_5418 = plVar21;
      local_54e0[1] = pplVar53[-0x40];
      *local_54e0 = plVar56;
      uVar48 = GISLParserContext::arraySizeErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0x34),
                          (AST_TypedNode *)plVar41,(uint *)local_c0);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      in_x2 = (char *)((ulong)local_c0 & 0xffffffff);
      local_5440 = (long *)IR_TypeSet::getArrayType
                                     ((IR_TypeSet *)uStack_5448,(IR_Type *)local_5440,local_c0._0_4_
                                     );
      local_5420 = (long *)0x0;
      local_5410 = pplVar53[2];
      uVar37 = local_5504;
      break;
    case 0xb0:
      GsTSymbolTable::push((GsTSymbolTable *)*local_54b0,(SHC_PoolAllocator *)local_54b0[0xb]);
      uVar37 = local_5504;
      break;
    case 0xb1:
      GsTSymbolTable::pop();
      uVar37 = local_5504;
      break;
    case 0xb2:
      plStack_5458 = pplVar53[-0x17];
      if (plStack_5458 != (long *)0x0) {
        *(undefined4 *)(plStack_5458 + 9) = 1;
        goto switchD_00c22408_caseD_dd;
      }
      goto LAB_00c22410;
    case 0xb6:
    case 0xb8:
      plStack_5458 = pplVar53[-10];
      if (plStack_5458 != (long *)0x0) {
        *(undefined4 *)(plStack_5458 + 9) = 1;
        plStack_5458 = pplVar53[-10];
      }
      goto LAB_00c22410;
    case 0xb9:
      in_x2 = (char *)pplVar53[-0xc];
      plVar41 = pplVar53[-0xb];
      plVar21 = pplVar53[-0xd];
      bVar7 = true;
LAB_00c24434:
      plVar41 = (long *)GISLParserUtil::ir_make_asm_string
                                  ((GISLParserUtil *)plVar41,(SHC_String *)plVar21,
                                   (GsTSourceLoc)in_x2,bVar7,(GISLParserContext *)local_54b0);
      goto LAB_00c265b8;
    case 0xbb:
      plVar41 = pplVar53[3];
      pAVar12 = (AST_Node *)0x0;
      in_x2 = (char *)0x0;
      goto LAB_00c25d4c;
    case 0xbc:
      plVar41 = pplVar53[-10];
      plVar21 = pplVar53[3];
      in_x2 = (char *)0x0;
      GVar23 = 0;
      goto LAB_00c24b04;
    case 0xbf:
      uVar48 = GISLParserContext::boolErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0x34),
                          (AST_TypedNode *)pplVar53[-0x17]);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      in_x2 = (char *)pplVar53[4];
      plStack_5458 = (long *)GISLParserUtil::ir_add_selection
                                       ((AST_TypedNode *)pplVar53[-0x17],(NodePair)pplVar53[3],
                                        (GsTSourceLoc)in_x2,(GISLParserContext *)pplVar53[-0x34]);
      uVar37 = local_5504;
      break;
    case 0xc0:
    case 0xcf:
      plStack_5458 = pplVar53[-0x17];
      local_5450 = pplVar53[3];
      break;
    case 0xc1:
      plStack_5458 = pplVar53[3];
      goto LAB_00c24618;
    case 0xc2:
      in_x2 = (char *)pplVar53[3];
      plStack_5458 = pplVar53[3];
      uVar48 = GISLParserContext::boolErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)((long)in_x2 + 8),
                          (AST_TypedNode *)in_x2);
      uVar37 = local_5504;
      if ((uVar48 & 1) != 0) goto LAB_00c25b4c;
      break;
    case 0xc3:
      uVar48 = GISLParserContext::boolErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)(pplVar53 + -0x1a),
                          (SHC_Type *)(pplVar53 + -0x22));
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      in_x2 = (char *)pplVar53[-0x19];
      uVar48 = GISLParserContext::executeInitializer
                         (GVar23,(SHC_String *)pplVar53[-0x1a],(SHC_Type *)in_x2,
                          (AST_TypedNode **)pplVar53[-0x18],(AST_SymbolNode **)(pplVar53 + -0x22),
                          (GsTVariable *)(pplVar53 + 3));
      if ((uVar48 & 1) == 0) {
        in_x2 = (char *)pplVar53[-0x1a];
        plStack_5458 = (long *)GISLParserUtil::ir_add_declaration
                                         ((GISLParserUtil *)local_c0,(AST_SymbolNode *)pplVar53[3],
                                          (AST_TypedNode *)in_x2,(GsTSourceLoc)pplVar53[-0x19],
                                          (GISLParserContext *)local_54b0);
        uVar37 = local_5504;
      }
      else {
        GISLParserContext::recover();
        plStack_5458 = (long *)0x0;
        uVar37 = local_5504;
      }
      break;
    case 0xc4:
    case 200:
      GsTSymbolTable::push((GsTSymbolTable *)*local_54b0,(SHC_PoolAllocator *)local_54b0[0xb]);
      iVar54 = *(int *)((long)local_54b0 + 0x24) + 1;
      goto LAB_00c25bd8;
    case 0xc5:
      GsTSymbolTable::pop();
      in_x2 = (char *)0x0;
      plStack_5458 = (long *)GISLParserUtil::ir_add_loop
                                       ((GISLParserUtil *)0x1,(LoopType)pplVar53[-0x17],
                                        (AST_TypedNode *)0x0,(AST_TypedNode *)pplVar53[3],
                                        (AST_Node *)pplVar53[-0x41],(GsTSourceLoc)pplVar53[-0x40],
                                        (GISLParserContext *)local_54b0);
      iVar54 = *(int *)((long)local_54b0 + 0x24) + -1;
      goto LAB_00c25bd8;
    case 0xc6:
      *(int *)((long)local_54b0 + 0x24) = *(int *)((long)local_54b0 + 0x24) + 1;
      break;
    case 199:
      uVar48 = GISLParserContext::boolErrorCheck
                         ((GISLParserContext *)local_54b0,(GsTSourceLoc *)pplVar53,
                          (AST_TypedNode *)pplVar53[-0x17]);
      if ((uVar48 & 1) != 0) {
        GISLParserContext::recover();
      }
      in_x2 = (char *)0x0;
      plStack_5458 = (long *)GISLParserUtil::ir_add_loop
                                       ((GISLParserUtil *)0x2,(LoopType)pplVar53[-0x17],
                                        (AST_TypedNode *)0x0,(AST_TypedNode *)pplVar53[-0x3e],
                                        (AST_Node *)pplVar53[-0x34],(GsTSourceLoc)pplVar53[-0x33],
                                        (GISLParserContext *)local_54b0);
      *(int *)((long)local_54b0 + 0x24) = *(int *)((long)local_54b0 + 0x24) + -1;
      uVar37 = local_5504;
      break;
    case 0xc9:
      GsTSymbolTable::pop();
      pGVar10 = (GISLParserUtil *)
                GISLParserUtil::ir_make_aggregate
                          ((GISLParserUtil *)pplVar53[-0x24],(AST_Node *)pplVar53[-0x41],
                           (GsTSourceLoc)pplVar53[-0x40],(GISLParserContext *)local_54b0);
      plStack_5458 = (long *)pGVar10;
      pAVar12 = (AST_Node *)
                GISLParserUtil::ir_add_loop
                          ((GISLParserUtil *)0x0,(LoopType)pplVar53[-0x17],
                           (AST_TypedNode *)pplVar53[-0x16],(AST_TypedNode *)pplVar53[3],
                           (AST_Node *)pplVar53[-0x4e],(GsTSourceLoc)pplVar53[-0x4d],
                           (GISLParserContext *)local_54b0);
      in_x2 = (char *)pplVar53[-0x4e];
      plStack_5458 = (long *)GISLParserUtil::ir_grow_aggregate
                                       (pGVar10,pAVar12,(AST_Node *)in_x2,
                                        (GsTSourceLoc)pplVar53[-0x4d],0,
                                        (GISLParserContext *)local_54b0);
      lVar14 = (**(code **)(*plStack_5458 + 0x30))();
      *(undefined4 *)(lVar14 + 0x48) = 1;
      iVar54 = *(int *)((long)local_54b0 + 0x24) + -1;
LAB_00c25bd8:
      *(int *)((long)local_54b0 + 0x24) = iVar54;
      uVar37 = local_5504;
      break;
    case 0xce:
      plStack_5458 = pplVar53[-10];
LAB_00c24618:
      local_5450 = (long *)0x0;
      break;
    case 0xd0:
      if (*(int *)((long)local_54b0 + 0x24) < 1) {
        GISLParserContext::error
                  (GVar23,(char *)pplVar53[-0xd],(char *)pplVar53[-0xc],
                   "continue statement only allowed in loops",&DAT_0050a39f,&DAT_0050a39f);
        GISLParserContext::recover();
      }
      in_x2 = (char *)pplVar53[-0xc];
      GVar8 = (GsTOperator)pplVar53[-0xd];
      pGVar10 = (GISLParserUtil *)0x57;
      goto LAB_00c25c34;
    case 0xd1:
      if (*(int *)((long)local_54b0 + 0x24) < 1) {
        GISLParserContext::error
                  (GVar23,(char *)pplVar53[-0xd],(char *)pplVar53[-0xc],
                   "break statement only allowed in loops",&DAT_0050a39f,&DAT_0050a39f);
        GISLParserContext::recover();
      }
      GVar8 = (GsTOperator)pplVar53[-0xd];
      in_x2 = (char *)pplVar53[-0xc];
      pGVar10 = (GISLParserUtil *)0x56;
LAB_00c25c34:
      plStack_5458 = (long *)GISLParserUtil::ir_add_branch
                                       (pGVar10,GVar8,(GsTSourceLoc)in_x2,
                                        (GISLParserContext *)local_54b0);
      uVar37 = local_5504;
      break;
    case 0xd2:
      in_x2 = (char *)pplVar53[-0xc];
      plStack_5458 = (long *)GISLParserUtil::ir_add_branch
                                       ((GISLParserUtil *)0x55,(GsTOperator)pplVar53[-0xd],
                                        (GsTSourceLoc)in_x2,(GISLParserContext *)local_54b0);
      uVar37 = local_5504;
      if ((*(uint *)local_54b0[6][1] | ((uint *)local_54b0[6][1])[2]) != 0) {
        plVar41 = pplVar53[-0xd];
        in_x2 = (char *)pplVar53[-0xc];
        pcVar35 = "non-void function must return a value";
        pcVar25 = "return";
        pSVar36 = (SHC_Type *)&DAT_0050a39f;
        goto LAB_00c257d8;
      }
      break;
    case 0xd3:
      plVar41 = pplVar53[-10];
      puVar31 = (uint *)local_54b0[6][1];
      if ((*puVar31 | puVar31[2]) == 0) {
        GISLParserContext::error
                  (GVar23,(char *)pplVar53[-0x1a],(char *)pplVar53[-0x19],
                   "void function cannot return a value","return",&DAT_0050a39f);
        GISLParserContext::recover();
      }
      else if ((puVar31 != (uint *)plVar41[4]) &&
              ((uVar50 = GISLParserContext::getConstructorOp
                                   ((GISLParserContext *)local_54b0,(SHC_Type *)local_54b0[6]),
               uVar50 == 0 ||
               (plVar41 = (long *)GISLParserContext::constructBuiltIn
                                            ((SHC_Type *)local_54b0,(GsTOperator)local_54b0[6],
                                             (AST_Node *)(ulong)uVar50,(GsTSourceLoc)pplVar53[-10],
                                             SUB81(pplVar53[-0x1a],0)), plVar41 == (long *)0x0)))) {
        GISLParserContext::error
                  (GVar23,(char *)pplVar53[-0x1a],(char *)pplVar53[-0x19],
                   "function return is not matching type:","return",&DAT_0050a39f);
        GISLParserContext::recover();
        plVar41 = pplVar53[-10];
      }
      in_x2 = (char *)pplVar53[-0x1a];
      plStack_5458 = (long *)GISLParserUtil::ir_add_branch
                                       ((GISLParserUtil *)0x55,(GsTOperator)plVar41,
                                        (AST_TypedNode *)in_x2,(GsTSourceLoc)pplVar53[-0x19],
                                        (GISLParserContext *)local_54b0);
      *(undefined *)(local_54b0 + 7) = 1;
      uVar37 = local_5504;
      break;
    case 0xd4:
      in_x2 = (char *)pplVar53[-0xc];
      plVar41 = (long *)GISLParserUtil::ir_add_branch
                                  ((GISLParserUtil *)0x54,(GsTOperator)pplVar53[-0xd],
                                   (GsTSourceLoc)in_x2,(GISLParserContext *)local_54b0);
      goto LAB_00c265b8;
    case 0xd5:
      plStack_5458 = pplVar53[3];
      local_54b0[2] = pplVar53[3];
      break;
    case 0xd6:
      in_x2 = (char *)0x0;
      plStack_5458 = (long *)GISLParserUtil::ir_grow_aggregate
                                       ((GISLParserUtil *)pplVar53[-10],(AST_Node *)pplVar53[3],
                                        (AST_Node *)0x0,0,0,(GISLParserContext *)local_54b0);
      local_54b0[2] = plStack_5458;
      uVar37 = local_5504;
      break;
    case 0xda:
      plVar21 = pplVar53[5];
      plVar41 = *local_54b0;
      pSVar11 = (SHC_String *)(**(code **)(*plVar21 + 0x10))(plVar21);
      plVar41 = (long *)GsTSymbolTable::find
                                  ((GsTSymbolTable *)plVar41,pSVar11,(bool *)0x0,(bool *)0x0);
      if (plVar21 != plVar41) {
        if ((plVar41[0x13] != 0) && (*(char *)(plVar21 + 0x18) == '\0')) {
          pbVar30 = (byte *)plVar21[1];
          pbVar34 = *(byte **)(pbVar30 + 0x10);
          if ((*pbVar30 & 1) == 0) {
            pbVar34 = pbVar30 + 1;
          }
          GISLParserContext::error
                    (GVar23,(char *)*pplVar53,(char *)pplVar53[1],"function already has a body",
                     pbVar34,&DAT_0050a39f);
          GISLParserContext::recover();
        }
        plVar56 = *local_54b0;
        pSVar11 = (SHC_String *)(**(code **)(*plVar21 + 0x10))(plVar21);
        GsTSymbolTable::remove((GsTSymbolTable *)plVar56,pSVar11);
        GsTSymbolTable::insert((GsTSymbolTable *)*local_54b0,(GsTSymbol *)plVar21);
      }
      GsTSymbolTable::push((GsTSymbolTable *)*local_54b0,(SHC_PoolAllocator *)local_54b0[0xb]);
      *(undefined *)(local_54b0 + 7) = 0;
      local_54b0[6] = plVar41 + 8;
      plVar41 = (long *)SHC_PoolAllocator::allocate((SHC_PoolAllocator *)local_54b0[0xb],0x88);
      local_c0 = (undefined  [8])0x0;
      uStack_b8 = 0;
      uStack_b4 = 0;
      uStack_b0 = 0;
      local_54f8[1] = 0;
      local_54f8[2] = 0;
      *local_54f8 = 0;
      plVar56 = local_54b0[0xb];
      plVar41[1] = 0;
      plVar41[2] = 0;
      plVar41[4] = 0;
      plVar41[3] = 0;
      *(undefined4 *)(plVar41 + 9) = 0;
      plVar41[10] = 0;
      plVar41[0xb] = 0;
      plVar41[0xc] = 0;
      plVar41[0xd] = (long)plVar56;
      plVar41[0xf] = 0;
      plVar41[0x10] = 0;
      plVar41[6] = CONCAT44(uStack_a4,uStack_a8);
      plVar41[5] = (ulong)uStack_ac << 0x20;
      plVar41[0xe] = 0;
      *plVar41 = (long)&PTR_traverse_00fed8e8;
      plVar41[8] = (long)plStack_98;
      plVar41[7] = (long)local_a0;
      lVar14 = plVar21[4];
      if (0 < (int)((ulong)(plVar21[5] - lVar14) >> 3) * -0x55555555) {
        lVar51 = 0;
        lVar47 = 0;
        do {
          if (*(long *)(lVar14 + lVar51) == 0) {
            iVar54 = SHC_String::New("",*local_54d0);
            pAVar12 = (AST_Node *)
                      GISLParserUtil::ir_add_symbol_internal
                                ((GISLParserUtil *)0x0,iVar54,*(SHC_String **)(lVar14 + lVar51 + 8),
                                 *(SHC_String **)(lVar14 + lVar51 + 0x10),(SHC_Type *)*pplVar53,
                                 (GsTSourceLoc)pplVar53[1],(GISLParserContext *)local_54b0);
          }
          else {
            plVar13 = (long *)SHC_PoolAllocator::allocate(*local_54d0,0x98);
            plVar56 = (long *)(lVar14 + lVar51);
            lVar42 = *plVar56;
            lVar49 = plVar56[1];
            plVar56 = (long *)plVar56[2];
            plVar13[4] = 0;
            plVar13[1] = lVar42;
            plVar13[2] = lVar49;
            *plVar13 = (long)&PTR__GsTSymbol_00fee830;
            lVar59 = plVar56[3];
            lVar57 = plVar56[2];
            lVar49 = plVar56[5];
            lVar42 = plVar56[4];
            lVar63 = plVar56[1];
            lVar60 = *plVar56;
            *(undefined2 *)(plVar13 + 0xb) = 0;
            plVar13[10] = lVar49;
            plVar13[9] = lVar42;
            plVar13[8] = lVar59;
            plVar13[7] = lVar57;
            plVar13[6] = lVar63;
            plVar13[5] = lVar60;
            plVar56 = *local_54b0;
            iVar54 = *(int *)(plVar56 + 3);
            *(int *)(plVar56 + 3) = iVar54 + 1;
            *(int *)(plVar13 + 3) = iVar54 + 1;
            uVar48 = GsTSymbolTableLevel::insert
                               (*(GsTSymbolTableLevel **)
                                 (*plVar56 +
                                 ((plVar56[1] - *plVar56) * 0x20000000 + -0x100000000 >> 0x20) * 8),
                                (GsTSymbol *)plVar13);
            if ((uVar48 & 1) == 0) {
              pbVar30 = (byte *)plVar13[1];
              pbVar34 = *(byte **)(pbVar30 + 0x10);
              if ((*pbVar30 & 1) == 0) {
                pbVar34 = pbVar30 + 1;
              }
              GISLParserContext::error
                        (GVar23,(char *)*pplVar53,(char *)pplVar53[1],"redefinition",pbVar34,
                         &DAT_0050a39f);
              GISLParserContext::recover();
              (**(code **)(*plVar13 + 8))(plVar13);
            }
            *(undefined8 *)(lVar14 + lVar51) = 0;
            pAVar12 = (AST_Node *)
                      GISLParserUtil::ir_add_symbol
                                ((GISLParserUtil *)plVar13,(GsTVariable *)*pplVar53,
                                 (GsTSourceLoc)pplVar53[1],(GISLParserContext *)local_54b0);
          }
          plVar41 = (long *)GISLParserUtil::ir_grow_aggregate
                                      ((GISLParserUtil *)plVar41,pAVar12,(AST_Node *)*pplVar53,
                                       (GsTSourceLoc)pplVar53[1],0,(GISLParserContext *)local_54b0);
          lVar14 = plVar21[4];
          lVar47 = lVar47 + 1;
          lVar51 = lVar51 + 0x18;
        } while (lVar47 < (int)((ulong)(plVar21[5] - lVar14) >> 3) * -0x55555555);
      }
      in_x2 = (char *)*pplVar53;
      GISLParserUtil::ir_set_aggregate_op
                ((GISLParserUtil *)plVar41,(AST_Node *)0x5,(GsTOperator)in_x2,
                 (GsTSourceLoc)pplVar53[1],(GISLParserContext *)local_54b0);
      pplVar53[3] = plVar41;
      *(undefined4 *)((long)local_54b0 + 0x24) = 0;
      uVar37 = local_5504;
      break;
    case 0xdb:
      if ((((*(uint *)local_54b0[6][1] | ((uint *)local_54b0[6][1])[2]) != 0) &&
          (*(char *)(local_54b0 + 7) == '\0')) &&
         ((pplVar53[3] == (long *)0x0 ||
          (lVar14 = (**(code **)(*pplVar53[3] + 0x48))(), lVar14 == 0)))) {
        pbVar30 = (byte *)pplVar53[-0x15][1];
        pbVar34 = *(byte **)(pbVar30 + 0x10);
        if ((*pbVar30 & 1) == 0) {
          pbVar34 = pbVar30 + 1;
        }
        GISLParserContext::error
                  (GVar23,(char *)pplVar53[-0x1a],(char *)pplVar53[-0x19],
                   "function does not return a value:",&DAT_0050a39f,pbVar34);
        GISLParserContext::recover();
      }
      GsTSymbolTable::pop();
      in_x2 = (char *)pplVar53[-0x1a];
      plVar41 = (long *)GISLParserUtil::ir_grow_aggregate
                                  ((GISLParserUtil *)pplVar53[-0x17],(AST_Node *)pplVar53[3],
                                   (AST_Node *)in_x2,(GsTSourceLoc)pplVar53[-0x19],0,
                                   (GISLParserContext *)local_54b0);
      *(undefined4 *)(plVar41 + 9) = 4;
      pbVar30 = (byte *)(**(code **)(*pplVar53[-0x15] + 0x10))();
      pbVar34 = *(byte **)(pbVar30 + 0x10);
      if ((*pbVar30 & 1) == 0) {
        pbVar34 = pbVar30 + 1;
      }
      lVar14 = SHC_String::New((char *)pbVar34,(SHC_PoolAllocator *)local_54b0[0xb]);
      plVar41[0xe] = lVar14;
      plVar41[0xf] = pplVar53[-0x15][1];
      plVar21 = pplVar53[-0x15];
      lVar51 = plVar21[0xb];
      lVar47 = plVar21[10];
      lVar14 = plVar21[0xc];
      lVar49 = plVar21[9];
      lVar42 = plVar21[8];
      plVar41[8] = plVar21[0xd];
      plVar41[7] = lVar14;
      plVar41[6] = lVar51;
      plVar41[5] = lVar47;
      plVar41[4] = lVar49;
      plVar41[3] = lVar42;
      plStack_5458 = plVar41;
      plVar41[0x10] = pplVar53[-0x15][2];
      pplVar53[-0x15][0x13] = (long)plVar41;
      uVar37 = local_5504;
      break;
    case 0xdd:
switchD_00c22408_caseD_dd:
      plStack_5458 = pplVar53[-0x17];
LAB_00c22410:
      break;
    case 0xde:
      plVar41 = pplVar53[3];
      pAVar12 = (AST_Node *)plVar41[1];
      in_x2 = (char *)plVar41[2];
LAB_00c25d4c:
      plVar41 = (long *)GISLParserUtil::ir_make_aggregate
                                  ((GISLParserUtil *)plVar41,pAVar12,(GsTSourceLoc)in_x2,
                                   (GISLParserContext *)local_54b0);
      goto LAB_00c265b8;
    case 0xdf:
      plVar41 = (long *)(**(code **)(*pplVar53[3] + 0x30))();
      goto LAB_00c265b8;
    case 0xe0:
      plVar21 = pplVar53[3];
      plVar41 = pplVar53[-0x17];
      in_x2 = (char *)plVar21[1];
      GVar23 = (GsTSourceLoc)plVar21[2];
LAB_00c24b04:
      plVar41 = (long *)GISLParserUtil::ir_grow_aggregate
                                  ((GISLParserUtil *)plVar41,(AST_Node *)plVar21,(AST_Node *)in_x2,
                                   GVar23,0,(GISLParserContext *)local_54b0);
      goto LAB_00c265b8;
    case 0xe1:
      plVar41 = pplVar53[-0x17];
      pAVar15 = (AST_AggregateNode *)(**(code **)(*pplVar53[3] + 0x30))();
      in_x2 = (char *)local_54b0;
      plVar41 = (long *)GISLParserUtil::mergeAggregates
                                  ((AST_AggregateNode *)plVar41,pAVar15,
                                   (GISLParserContext *)local_54b0);
      goto LAB_00c265b8;
    case 0xe3:
    case 0xe4:
      local_5460 = pplVar53[2];
      break;
    case 0xe5:
    case 0xe7:
      uStack_5448 = (long *)0x0;
      break;
    case 0xe6:
      uStack_5448 = pplVar53[2];
      goto LAB_00c25e3c;
    case 0xe8:
      uStack_5448 = pplVar53[-0xb];
LAB_00c25e3c:
    }
    if (gsParser_debug == 0) {
      uVar48 = (ulong)(byte)(&DAT_0053d8ed)[local_5520];
    }
    else {
      fprintf(_stderr,"%s ","-> $$ =");
      pFVar6 = _stderr;
      uVar48 = (ulong)(byte)(&DAT_0053d8ed)[local_5520];
      in_x2 = "token";
      if ((int)local_5520 != 0) {
        in_x2 = "nterm";
      }
      fprintf(_stderr,"%s %s (",in_x2,(&PTR_s__end_of_file__00feda40)[uVar48]);
      fputc(0x29,pFVar6);
      fputc(10,_stderr);
      uVar37 = local_5504;
    }
    psVar38 = psVar38 + -lVar44;
    pplVar53[lVar44 * -0xd + 0x12] = uStack_5448;
    pplVar53[lVar44 * -0xd + 0x11] = local_5450;
    pplVar53[lVar44 * -0xd + 0x10] = plStack_5458;
    pplVar53[lVar44 * -0xd + 0xf] = local_5460;
    pplVar53[lVar44 * -0xd + 0x19] = local_5410;
    pplVar53[lVar44 * -0xd + 0xe] = plStack_5468;
    pplVar53[lVar44 * -0xd + 0xd] = local_5470;
    pplVar53[lVar44 * -0xd + 0x18] = plStack_5418;
    pplVar53[lVar44 * -0xd + 0x17] = local_5420;
    pplVar53[lVar44 * -0xd + 0x16] = plStack_5428;
    pplVar53[lVar44 * -0xd + 0x15] = local_5430;
    sVar4 = *(short *)(&DAT_0053d9d6 + (uVar48 - 99) * 2);
    pplVar53[lVar44 * -0xd + 0x14] = (long *)auStack_5438;
    pplVar53[lVar44 * -0xd + 0x13] = local_5440;
    uVar50 = (int)*psVar38 + (int)sVar4;
    if ((uVar50 < 0x680) &&
       (*(short *)(" !\"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`ab" +
                  (ulong)uVar50 * 2 + 0x43) == *psVar38)) {
      psVar33 = (short *)(&DAT_0053c98c + (ulong)uVar50 * 2);
    }
    else {
      psVar33 = (short *)(&DAT_0053da84 + (uVar48 - 99) * 2);
    }
    uVar50 = (uint)*psVar33;
    pplVar16 = pplVar53 + lVar44 * -0xd + 0xd;
    local_54b0 = (long **)param_2;
LAB_00c278a4:
    psVar38 = psVar38 + 1;
    if (gsParser_debug != 0) goto LAB_00c2200c;
LAB_00c220a8:
    *psVar38 = (short)uVar50;
    psVar33 = psVar9;
    pplVar53 = pplVar16;
  } while( true );
}



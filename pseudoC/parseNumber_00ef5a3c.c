// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseNumber
// Entry Point: 00ef5a3c
// Size: 1096 bytes
// Signature: undefined parseNumber(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::parseNumber() */

AstExprConstantNumber * Luau::Parser::parseNumber(void)

{
  Location *pLVar1;
  Location LVar2;
  long lVar3;
  bool bVar4;
  Location *in_x0;
  long lVar5;
  ulonglong uVar6;
  int *piVar7;
  AstExprConstantNumber *this;
  Location *pLVar8;
  Location *pLVar9;
  Location *pLVar10;
  byte bVar11;
  ulong uVar12;
  ConstantNumberParseResult CVar13;
  Location *pLVar14;
  double dVar15;
  char *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  pLVar9 = in_x0 + 0x310;
  local_58 = *(long *)(lVar3 + 0x28);
  uStack_68 = *(undefined8 *)(in_x0 + 0x34);
  local_70 = *(undefined8 *)(in_x0 + 0x2c);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)pLVar9,*(ulong *)(in_x0 + 0x40));
  lVar5 = std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::find
                    ((char)pLVar9,0x5f);
  if (lVar5 != -1) {
    LVar2 = in_x0[0x310];
    pLVar10 = *(Location **)(in_x0 + 800);
    bVar11 = (byte)LVar2 & 1;
    bVar4 = ((byte)LVar2 & 1) == 0;
    pLVar14 = pLVar10;
    if (bVar4) {
      pLVar14 = in_x0 + 0x311;
    }
    uVar12 = (ulong)((byte)LVar2 >> 1);
    if (!bVar4) {
      uVar12 = *(ulong *)(in_x0 + 0x318);
    }
    pLVar1 = pLVar14 + uVar12;
    pLVar8 = pLVar1;
    if (uVar12 != 0) {
      do {
        uVar12 = uVar12 - 1;
        if (*pLVar14 == (Location)0x5f) {
          pLVar8 = pLVar14;
          if ((pLVar14 != pLVar1) && (pLVar14 + 1 != pLVar1)) {
            lVar5 = 1;
            pLVar10 = pLVar14;
            do {
              pLVar8 = pLVar10;
              if (pLVar14[lVar5] != (Location)0x5f) {
                pLVar8 = pLVar10 + 1;
                *pLVar10 = pLVar14[lVar5];
              }
              uVar12 = uVar12 - 1;
              lVar5 = lVar5 + 1;
              pLVar10 = pLVar8;
            } while (uVar12 != 0);
            pLVar10 = *(Location **)(in_x0 + 800);
            bVar11 = (byte)in_x0[0x310] & 1;
          }
          break;
        }
        pLVar14 = pLVar14 + 1;
      } while (pLVar14 != pLVar1);
    }
    pLVar14 = in_x0 + 0x311;
    if (bVar11 != 0) {
      pLVar14 = pLVar10;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    erase((ulong)pLVar9,(long)pLVar8 - (long)pLVar14);
  }
  pLVar9 = *(Location **)(in_x0 + 800);
  if (((byte)in_x0[0x310] & 1) == 0) {
    pLVar9 = in_x0 + 0x311;
  }
  if (*pLVar9 == (Location)0x30) {
    LVar2 = pLVar9[1];
    if ((byte)LVar2 < 0x62) {
      if (LVar2 != (Location)0x42) {
LAB_00ef5c3c:
        if (LVar2 != (Location)0x58) goto LAB_00ef5cc4;
        goto LAB_00ef5c44;
      }
LAB_00ef5ba8:
      pLVar14 = pLVar9 + 2;
      if (*pLVar14 == (Location)0x0) goto LAB_00ef5c3c;
      local_80 = (char *)0x0;
      uVar6 = strtoull((char *)pLVar14,&local_80,2);
      if (*local_80 != '\0') goto LAB_00ef5d3c;
      dVar15 = (double)(unkuint9)uVar6;
      if ((uVar6 != 0xffffffffffffffff) || (piVar7 = (int *)__errno(), *piVar7 != 0x22))
      goto LAB_00ef5db0;
      *piVar7 = 0;
      strtoull((char *)pLVar14,&local_80,2);
      if (*piVar7 != 0x22) goto LAB_00ef5db0;
      if (DFFlag::LuaReportParseIntegerIssues == '\0') {
        CVar13 = 2;
      }
      else {
        CVar13 = 2;
        lua_telemetry_parsed_out_of_range_bin_integer = 1;
      }
      goto LAB_00ef5ce8;
    }
    if (LVar2 != (Location)0x78) {
      if (LVar2 == (Location)0x62) goto LAB_00ef5ba8;
      goto LAB_00ef5cc4;
    }
LAB_00ef5c44:
    pLVar14 = pLVar9 + 2;
    if (*pLVar14 == (Location)0x0) goto LAB_00ef5cc4;
    if (((FFlag::LuauErrorDoubleHexPrefix != '\0') || (*pLVar14 != (Location)0x30)) ||
       (((byte)pLVar9[3] | 0x20) != 0x78)) {
      local_80 = (char *)0x0;
      uVar6 = strtoull((char *)pLVar9,&local_80,0x10);
      if (*local_80 == '\0') {
        dVar15 = (double)(unkuint9)uVar6;
        if ((uVar6 == 0xffffffffffffffff) && (piVar7 = (int *)__errno(), *piVar7 == 0x22)) {
          *piVar7 = 0;
          strtoull((char *)pLVar9,&local_80,0x10);
          if (*piVar7 == 0x22) {
            if (DFFlag::LuaReportParseIntegerIssues == '\0') {
              CVar13 = 3;
            }
            else {
              CVar13 = 3;
              lua_telemetry_parsed_out_of_range_hex_integer = 1;
            }
            goto LAB_00ef5ce8;
          }
        }
LAB_00ef5db0:
        CVar13 = 0;
      }
      else {
LAB_00ef5d3c:
        dVar15 = 0.0;
        CVar13 = 1;
      }
      goto LAB_00ef5ce8;
    }
    if (DFFlag::LuaReportParseIntegerIssues != '\0') {
      lua_telemetry_parsed_double_prefix_hex_integer = 1;
    }
    local_80 = (char *)0x0;
    uVar6 = strtoull((char *)pLVar14,&local_80,0x10);
    if (*local_80 == '\0') {
      if ((uVar6 == 0xffffffffffffffff) && (piVar7 = (int *)__errno(), *piVar7 == 0x22)) {
        *piVar7 = 0;
        strtoull((char *)pLVar14,&local_80,0x10);
        if ((*piVar7 == 0x22) && (DFFlag::LuaReportParseIntegerIssues != '\0')) {
          lua_telemetry_parsed_out_of_range_hex_integer = 1;
        }
      }
      dVar15 = (double)(unkuint9)uVar6;
      nextLexeme();
      CVar13 = 4;
      goto LAB_00ef5e20;
    }
    nextLexeme();
  }
  else {
LAB_00ef5cc4:
    local_80 = (char *)0x0;
    dVar15 = strtod((char *)pLVar9,&local_80);
    CVar13 = (ConstantNumberParseResult)(*local_80 != '\0');
LAB_00ef5ce8:
    nextLexeme();
    if (CVar13 != 1) {
LAB_00ef5e20:
      this = (AstExprConstantNumber *)Allocator::allocate(*(Allocator **)(in_x0 + 0x80),0x30);
      AstExprConstantNumber::AstExprConstantNumber(this,(Location *)&local_70,dVar15,CVar13);
      goto LAB_00ef5e40;
    }
  }
  local_80 = (char *)0x0;
  uStack_78 = 0;
  this = (AstExprConstantNumber *)
         reportExprError(in_x0,(AstArray *)&local_70,(char *)&local_80,"Malformed number");
LAB_00ef5e40:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f29ec0
// Entry Point: 00f29ec0
// Size: 2500 bytes
// Signature: undefined FUN_00f29ec0(void)


long * FUN_00f29ec0(byte *param_1,undefined8 param_2,long param_3,long *param_4)

{
  long **pplVar1;
  long **pplVar2;
  long **pplVar3;
  long **pplVar4;
  long **pplVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  byte *pbVar13;
  long **pplVar14;
  byte *pbVar15;
  ulong uVar16;
  ulong uVar17;
  long **pplVar18;
  undefined auVar19 [16];
  long *local_380 [99];
  byte *local_68;
  
  local_68 = param_1;
  lVar10 = FUN_00f29cf0(&local_68,param_1 + 0x14);
  local_380[0] = param_4;
  pbVar6 = local_68 + lVar10;
  if (local_68 < pbVar6) {
    pplVar1 = (long **)(param_3 + 0xf0);
    pplVar2 = (long **)(param_3 + 0xe8);
    pplVar18 = local_380;
    pplVar3 = (long **)(param_3 + 0x108);
    pplVar4 = (long **)(param_3 + 0xf8);
    pplVar5 = (long **)(param_3 + 0x100);
    pbVar15 = local_68;
    do {
      pbVar13 = pbVar15 + 1;
      local_68 = pbVar13;
      bVar7 = *pbVar15;
      uVar9 = (uint)bVar7;
      switch((uint)bVar7) {
      case 3:
      case 0xe:
      case 0xf:
        pbVar13 = pbVar15 + 9;
        plVar11 = *(long **)(pbVar15 + 1);
        goto LAB_00f2a248;
      default:
        fprintf((FILE *)0x2249f40,"libunwind: %s - %s\n","evaluateExpression",
                "DWARF opcode not implemented");
        fflush((FILE *)0x2249f40);
                    /* WARNING: Subroutine does not return */
        abort();
      case 6:
        pplVar14 = (long **)*pplVar18;
code_r0x00f2a170:
        *pplVar18 = *pplVar14;
        goto LAB_00f29f58;
      case 8:
        pbVar13 = pbVar15 + 2;
        plVar11 = (long *)(ulong)pbVar15[1];
        goto LAB_00f2a248;
      case 9:
        pbVar13 = pbVar15 + 2;
        plVar11 = (long *)(long)(char)pbVar15[1];
        goto LAB_00f2a248;
      case 10:
        pbVar13 = pbVar15 + 3;
        plVar11 = (long *)(ulong)*(ushort *)(pbVar15 + 1);
        goto LAB_00f2a248;
      case 0xb:
        pbVar13 = pbVar15 + 3;
        plVar11 = (long *)(long)*(short *)(pbVar15 + 1);
        goto LAB_00f2a248;
      case 0xc:
        pbVar13 = pbVar15 + 5;
        plVar11 = (long *)(ulong)*(uint *)(pbVar15 + 1);
        goto LAB_00f2a248;
      case 0xd:
        pbVar13 = pbVar15 + 5;
        plVar11 = (long *)(long)*(int *)(pbVar15 + 1);
        goto LAB_00f2a248;
      case 0x10:
        plVar11 = (long *)FUN_00f29cf0(&local_68,pbVar6);
        pplVar18 = pplVar18 + 1;
        *pplVar18 = plVar11;
        goto LAB_00f29f58;
      case 0x11:
        uVar16 = 0;
        uVar12 = 0;
        pbVar15 = pbVar13;
        do {
          if (pbVar15 == pbVar6) {
            fprintf((FILE *)0x2249f40,"libunwind: %s - %s\n","getSLEB128",
                    "truncated sleb128 expression");
            fflush((FILE *)0x2249f40);
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar7 = *pbVar15;
          pbVar13 = pbVar13 + 1;
          uVar17 = uVar16 & 0x3f;
          uVar16 = uVar16 + 7;
          uVar12 = ((ulong)bVar7 & 0x7f) << uVar17 | uVar12;
          pbVar15 = pbVar15 + 1;
        } while ((char)bVar7 < '\0');
        uVar17 = -1L << (uVar16 & 0x3f);
        if (((int)uVar16 - 7U < 0x39 & bVar7 >> 6) == 0) {
          uVar17 = 0;
        }
        plVar11 = (long *)(uVar12 | uVar17);
LAB_00f2a248:
        local_68 = pbVar13;
        pplVar18 = pplVar18 + 1;
        *pplVar18 = plVar11;
        goto LAB_00f29f58;
      case 0x12:
        plVar11 = *pplVar18;
        goto LAB_00f29f54;
      case 0x13:
        pplVar18 = pplVar18 + -1;
        goto LAB_00f29f58;
      case 0x14:
        plVar11 = pplVar18[-1];
        goto LAB_00f29f54;
      case 0x15:
        local_68 = pbVar15 + 2;
        pplVar14 = pplVar18 + -(ulong)pbVar15[1];
        goto code_r0x00f29f50;
      case 0x16:
        auVar19 = NEON_ext(*(undefined (*) [16])(pplVar18 + -1),*(undefined (*) [16])(pplVar18 + -1)
                           ,8,1);
        *pplVar18 = auVar19._8_8_;
        pplVar18[-1] = auVar19._0_8_;
        goto LAB_00f29f58;
      case 0x17:
        plVar11 = *pplVar18;
        *pplVar18 = SUB168(*(undefined (*) [16])(pplVar18 + -2),8);
        pplVar18[-1] = SUB168(*(undefined (*) [16])(pplVar18 + -2),0);
        pplVar18[-2] = plVar11;
        goto LAB_00f29f58;
      case 0x18:
        pplVar14 = (long **)*pplVar18;
        pplVar18 = pplVar18 + -1;
        *pplVar18 = *pplVar14;
        goto LAB_00f29f58;
      case 0x19:
        plVar11 = *pplVar18;
        if ((long)plVar11 < 0) goto LAB_00f2a34c;
        goto LAB_00f29f58;
      case 0x1a:
        plVar11 = (long *)((ulong)pplVar18[-1] & (ulong)*pplVar18);
        break;
      case 0x1b:
        plVar11 = (long *)0x0;
        if (*pplVar18 != (long *)0x0) {
          plVar11 = (long *)((long)pplVar18[-1] / (long)*pplVar18);
        }
        break;
      case 0x1c:
        plVar11 = (long *)((long)pplVar18[-1] - (long)*pplVar18);
        break;
      case 0x1d:
        plVar11 = *pplVar18;
        lVar10 = 0;
        if (plVar11 != (long *)0x0) {
          lVar10 = (long)pplVar18[-1] / (long)plVar11;
        }
        plVar11 = (long *)((long)pplVar18[-1] - lVar10 * (long)plVar11);
        break;
      case 0x1e:
        plVar11 = (long *)((long)pplVar18[-1] * (long)*pplVar18);
        break;
      case 0x1f:
        plVar11 = *pplVar18;
LAB_00f2a34c:
        *pplVar18 = (long *)-(long)plVar11;
        goto LAB_00f29f58;
      case 0x20:
        *pplVar18 = (long *)~(ulong)*pplVar18;
        goto LAB_00f29f58;
      case 0x21:
        plVar11 = (long *)((ulong)pplVar18[-1] | (ulong)*pplVar18);
        break;
      case 0x22:
        plVar11 = (long *)((long)pplVar18[-1] + (long)*pplVar18);
        break;
      case 0x23:
        lVar10 = FUN_00f29cf0(&local_68,pbVar6);
        *pplVar18 = (long *)((long)*pplVar18 + lVar10);
        goto LAB_00f29f58;
      case 0x24:
        plVar11 = (long *)((long)pplVar18[-1] << ((ulong)*pplVar18 & 0x3f));
        break;
      case 0x25:
        plVar11 = (long *)((ulong)pplVar18[-1] >> ((ulong)*pplVar18 & 0x3f));
        break;
      case 0x26:
        plVar11 = (long *)((long)pplVar18[-1] >> ((ulong)*pplVar18 & 0x3f));
        break;
      case 0x27:
        plVar11 = (long *)((ulong)pplVar18[-1] ^ (ulong)*pplVar18);
        break;
      case 0x28:
        pplVar14 = pplVar18 + -1;
        plVar11 = *pplVar18;
        local_68 = pbVar15 + 3;
        pplVar18 = pplVar14;
        if (plVar11 != (long *)0x0) {
          local_68 = pbVar15 + 3 + *(short *)(pbVar15 + 1);
        }
        goto LAB_00f29f58;
      case 0x29:
        plVar11 = (long *)(ulong)(pplVar18[-1] == *pplVar18);
        break;
      case 0x2a:
        plVar11 = (long *)(ulong)(*pplVar18 <= pplVar18[-1]);
        break;
      case 0x2b:
        plVar11 = (long *)(ulong)(*pplVar18 < pplVar18[-1]);
        break;
      case 0x2c:
        plVar11 = (long *)(ulong)(pplVar18[-1] <= *pplVar18);
        break;
      case 0x2d:
        plVar11 = (long *)(ulong)(pplVar18[-1] < *pplVar18);
        break;
      case 0x2e:
        plVar11 = (long *)(ulong)(pplVar18[-1] != *pplVar18);
        break;
      case 0x2f:
        local_68 = pbVar15 + (long)*(short *)(pbVar15 + 1) + 3;
        goto LAB_00f29f58;
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x3f:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
        plVar11 = (long *)(ulong)(uVar9 - 0x30);
        goto LAB_00f29f54;
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5b:
      case 0x5c:
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x60:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x6f:
        pplVar14 = pplVar4;
        if (((uVar9 != 0x6f) && (pplVar14 = pplVar1, uVar9 != 0x6e)) &&
           (pplVar14 = pplVar2, uVar9 != 0x6d)) {
          pplVar14 = (long **)(param_3 + (ulong)(uVar9 - 0x50) * 8);
        }
        goto code_r0x00f29f50;
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7a:
      case 0x7b:
      case 0x7c:
      case 0x7d:
      case 0x7e:
      case 0x7f:
      case 0x80:
      case 0x81:
      case 0x82:
      case 0x83:
      case 0x84:
      case 0x85:
      case 0x86:
      case 0x87:
      case 0x88:
      case 0x89:
      case 0x8a:
      case 0x8b:
      case 0x8c:
      case 0x8d:
      case 0x8e:
      case 0x8f:
        uVar16 = 0;
        uVar12 = 0;
        uVar8 = bVar7 - 0x70;
        pbVar15 = pbVar13;
        do {
          if (pbVar15 == pbVar6) {
            fprintf((FILE *)0x2249f40,"libunwind: %s - %s\n","getSLEB128",
                    "truncated sleb128 expression");
            fflush((FILE *)0x2249f40);
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar7 = *pbVar15;
          pbVar13 = pbVar13 + 1;
          uVar17 = uVar16 & 0x3f;
          uVar16 = uVar16 + 7;
          uVar12 = ((ulong)bVar7 & 0x7f) << uVar17 | uVar12;
          pbVar15 = pbVar15 + 1;
        } while ((char)bVar7 < '\0');
        uVar17 = -1L << (uVar16 & 0x3f);
        local_68 = pbVar13;
        if (((int)uVar16 - 7U < 0x39 & bVar7 >> 6) == 0) {
          uVar17 = 0;
        }
        pplVar14 = pplVar5;
        switch(uVar9) {
        case 0x6e:
        case 0x8f:
          pplVar14 = pplVar4;
          break;
        case 0x6f:
        case 0x90:
          break;
        default:
          if (0x1c < uVar8) {
            fprintf((FILE *)0x2249f40,"libunwind: %s - %s\n","getRegister",
                    "unsupported arm64 register");
            fflush((FILE *)0x2249f40);
                    /* WARNING: Subroutine does not return */
            abort();
          }
          pplVar14 = (long **)(param_3 + (ulong)uVar8 * 8);
          break;
        case 0x8d:
          pplVar14 = pplVar2;
          break;
        case 0x8e:
          pplVar14 = pplVar1;
          break;
        case 0x92:
          pplVar14 = pplVar3;
        }
        plVar11 = (long *)((long)*pplVar14 + (uVar12 | uVar17));
        goto LAB_00f29f54;
      case 0x90:
        uVar9 = FUN_00f29cf0(&local_68,pbVar6);
        pplVar14 = pplVar5;
        switch(uVar9) {
        default:
          if (0x1c < uVar9) {
            fprintf((FILE *)0x2249f40,"libunwind: %s - %s\n","getRegister",
                    "unsupported arm64 register");
            fflush((FILE *)0x2249f40);
                    /* WARNING: Subroutine does not return */
            abort();
          }
          pplVar14 = (long **)(param_3 + (ulong)uVar9 * 8);
          break;
        case 0x1d:
          pplVar14 = pplVar2;
          break;
        case 0x1e:
          pplVar14 = pplVar1;
          break;
        case 0x22:
          pplVar14 = pplVar3;
          break;
        case 0xfffffffe:
        case 0x1f:
          pplVar14 = pplVar4;
          break;
        case 0xffffffff:
        case 0x20:
          break;
        }
code_r0x00f29f50:
        plVar11 = *pplVar14;
        goto LAB_00f29f54;
      case 0x91:
        fprintf((FILE *)0x2249f40,"libunwind: %s - %s\n","evaluateExpression",
                "DW_OP_fbreg not implemented");
        fflush((FILE *)0x2249f40);
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x92:
        uVar9 = FUN_00f29cf0(&local_68,pbVar6);
        uVar16 = 0;
        uVar12 = 0;
        pbVar15 = local_68;
        pbVar13 = local_68;
        do {
          if (pbVar13 == pbVar6) {
            fprintf((FILE *)0x2249f40,"libunwind: %s - %s\n","getSLEB128",
                    "truncated sleb128 expression");
            fflush((FILE *)0x2249f40);
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar7 = *pbVar13;
          pbVar15 = pbVar15 + 1;
          uVar17 = uVar16 & 0x3f;
          uVar16 = uVar16 + 7;
          uVar12 = ((ulong)bVar7 & 0x7f) << uVar17 | uVar12;
          pbVar13 = pbVar13 + 1;
        } while ((char)bVar7 < '\0');
        uVar17 = -1L << (uVar16 & 0x3f);
        local_68 = pbVar15;
        if (((int)uVar16 - 7U < 0x39 & bVar7 >> 6) == 0) {
          uVar17 = 0;
        }
        pplVar14 = pplVar5;
        switch(uVar9) {
        default:
          if (0x1c < uVar9) {
            fprintf((FILE *)0x2249f40,"libunwind: %s - %s\n","getRegister",
                    "unsupported arm64 register");
            fflush((FILE *)0x2249f40);
                    /* WARNING: Subroutine does not return */
            abort();
          }
          pplVar14 = (long **)(param_3 + (ulong)uVar9 * 8);
          break;
        case 0x1d:
          pplVar14 = pplVar2;
          break;
        case 0x1e:
          pplVar14 = pplVar1;
          break;
        case 0x22:
          pplVar14 = pplVar3;
          break;
        case 0xfffffffe:
        case 0x1f:
          pplVar14 = pplVar4;
          break;
        case 0xffffffff:
        case 0x20:
          break;
        }
        plVar11 = (long *)((long)*pplVar14 + (uVar12 | uVar17));
LAB_00f29f54:
        pplVar18[1] = plVar11;
        pplVar18 = pplVar18 + 1;
        goto LAB_00f29f58;
      case 0x93:
        fprintf((FILE *)0x2249f40,"libunwind: %s - %s\n","evaluateExpression",
                "DW_OP_piece not implemented");
        fflush((FILE *)0x2249f40);
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x94:
        local_68 = pbVar15 + 2;
        pplVar14 = (long **)*pplVar18;
        switch(pbVar15[1]) {
        case 1:
          *pplVar18 = (long *)(ulong)*(byte *)pplVar14;
          break;
        case 2:
          *pplVar18 = (long *)(ulong)*(ushort *)pplVar14;
          break;
        default:
          fprintf((FILE *)0x2249f40,"libunwind: %s - %s\n","evaluateExpression",
                  "DW_OP_deref_size with bad size");
          fflush((FILE *)0x2249f40);
                    /* WARNING: Subroutine does not return */
          abort();
        case 4:
          *pplVar18 = (long *)(ulong)*(uint *)pplVar14;
          break;
        case 8:
          goto code_r0x00f2a170;
        }
        goto LAB_00f29f58;
      }
      pplVar18[-1] = plVar11;
      pplVar18 = pplVar18 + -1;
LAB_00f29f58:
      pbVar15 = local_68;
    } while (local_68 < pbVar6);
    param_4 = *pplVar18;
  }
  return param_4;
}



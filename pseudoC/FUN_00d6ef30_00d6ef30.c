// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d6ef30
// Entry Point: 00d6ef30
// Size: 1556 bytes
// Signature: undefined FUN_00d6ef30(void)


/* WARNING: Type propagation algorithm not settling */

int FUN_00d6ef30(long *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  code **ppcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  
  lVar9 = param_1[0x48];
  iVar2 = 2;
  if (*(char *)(lVar9 + 0x21) == '\0') {
    iVar2 = (**(code **)(param_1[0x49] + 8))(param_1);
    while (iVar2 == 1) {
      while (*(int *)(lVar9 + 0x28) != 0) {
        if (*(int *)(lVar9 + 0x28) != 1) {
          iVar2 = *(int *)(param_1 + 0x34);
          goto joined_r0x00d6f0b4;
        }
        if ((*(uint *)((long)param_1 + 0x34) < 0xffdd) && (*(uint *)(param_1 + 6) < 0xffdd)) {
          iVar2 = *(int *)(param_1 + 0x23);
          if (0xfffffffa < iVar2 - 0xdU) goto LAB_00d6f094;
LAB_00d6f0e4:
          lVar7 = *param_1;
          *(int *)(lVar7 + 0x2c) = iVar2;
          ppcVar6 = (code **)*param_1;
          *(undefined4 *)(lVar7 + 0x28) = 0x10;
          (**ppcVar6)(param_1);
          iVar2 = *(int *)(param_1 + 7);
          if (10 < iVar2) goto LAB_00d6f110;
LAB_00d6f0a0:
          param_1[0x30] = 0x100000001;
        }
        else {
          *(undefined8 *)(*param_1 + 0x28) = 0xffdc0000002a;
          (**(code **)*param_1)(param_1);
          iVar2 = *(int *)(param_1 + 0x23);
          if (iVar2 - 0xdU < 0xfffffffb) goto LAB_00d6f0e4;
LAB_00d6f094:
          iVar2 = *(int *)(param_1 + 7);
          if (iVar2 < 0xb) goto LAB_00d6f0a0;
LAB_00d6f110:
          lVar8 = *param_1;
          *(int *)(lVar8 + 0x2c) = iVar2;
          lVar7 = *param_1;
          *(undefined4 *)(lVar8 + 0x28) = 0x1b;
          *(undefined4 *)(lVar7 + 0x30) = 10;
          (**(code **)*param_1)(param_1);
          iVar2 = *(int *)(param_1 + 7);
          param_1[0x30] = 0x100000001;
        }
        if (0 < iVar2) {
          lVar7 = 0x100000001;
          iVar3 = 0;
          puVar10 = (undefined8 *)(param_1[0x24] + 8);
          do {
            while ((0xfffffffb < *(int *)puVar10 - 5U &&
                   (0xfffffffb < *(int *)((long)puVar10 + 4) - 5U))) {
              lVar7 = NEON_smax(lVar7,CONCAT44(*(int *)((long)puVar10 + 4),*(int *)puVar10),4);
              iVar3 = iVar3 + 1;
              param_1[0x30] = lVar7;
              puVar10 = puVar10 + 0xc;
              if (iVar2 <= iVar3) goto LAB_00d6f1d4;
            }
            ppcVar6 = (code **)*param_1;
            *(undefined4 *)(ppcVar6 + 5) = 0x13;
            (**ppcVar6)(param_1);
            iVar2 = *(int *)(param_1 + 7);
            lVar7 = NEON_smax(param_1[0x30],*puVar10,4);
            iVar3 = iVar3 + 1;
            param_1[0x30] = lVar7;
            puVar10 = puVar10 + 0xc;
          } while (iVar3 < iVar2);
        }
LAB_00d6f1d4:
        if ((*(char *)(param_1 + 0x25) != '\0') ||
           ((*(char *)((long)param_1 + 0x129) != '\0' && (*(int *)(param_1 + 0x34) != 0)))) {
switchD_00d6f35c_caseD_3f:
          iVar3 = 8;
          goto LAB_00d6f1e0;
        }
        iVar3 = *(int *)(param_1 + 0x40);
        switch(iVar3) {
        case 0:
          iVar3 = 1;
          param_1[0x42] = (long)jpeg_natural_order;
          *(undefined4 *)(param_1 + 0x43) = 0;
          *(undefined4 *)((long)param_1 + 0x20c) = 1;
          break;
        case 1:
        case 2:
        case 4:
        case 5:
        case 6:
        case 7:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x2e:
        case 0x2f:
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
switchD_00d6f35c_caseD_1:
          lVar7 = *param_1;
          uVar5 = *(undefined4 *)((long)param_1 + 0x1fc);
          *(undefined4 *)(lVar7 + 0x28) = 0x11;
          *(undefined4 *)(lVar7 + 0x2c) = uVar5;
          *(undefined4 *)(*param_1 + 0x30) = *(undefined4 *)(param_1 + 0x40);
          *(undefined4 *)(*param_1 + 0x34) = *(undefined4 *)((long)param_1 + 0x204);
          *(undefined4 *)(*param_1 + 0x38) = *(undefined4 *)(param_1 + 0x41);
          (**(code **)*param_1)(param_1);
          iVar3 = *(int *)((long)param_1 + 0x20c);
          iVar2 = *(int *)(param_1 + 7);
          break;
        case 3:
          iVar3 = 2;
          *(undefined4 *)((long)param_1 + 0x20c) = 2;
          param_1[0x42] = (long)jpeg_natural_order2;
          *(undefined4 *)(param_1 + 0x43) = 3;
          break;
        case 8:
          iVar3 = 3;
          *(undefined4 *)((long)param_1 + 0x20c) = 3;
          param_1[0x42] = (long)jpeg_natural_order3;
          *(undefined4 *)(param_1 + 0x43) = 8;
          break;
        case 0xf:
          iVar3 = 4;
          *(undefined4 *)((long)param_1 + 0x20c) = 4;
          param_1[0x42] = (long)jpeg_natural_order4;
          *(undefined4 *)(param_1 + 0x43) = 0xf;
          break;
        case 0x18:
          iVar3 = 5;
          *(undefined4 *)((long)param_1 + 0x20c) = 5;
          param_1[0x42] = (long)jpeg_natural_order5;
          *(undefined4 *)(param_1 + 0x43) = 0x18;
          break;
        case 0x23:
          iVar3 = 6;
          *(undefined4 *)((long)param_1 + 0x20c) = 6;
          param_1[0x42] = (long)jpeg_natural_order6;
          *(undefined4 *)(param_1 + 0x43) = 0x23;
          break;
        case 0x30:
          iVar3 = 7;
          *(undefined4 *)((long)param_1 + 0x20c) = 7;
          param_1[0x42] = (long)jpeg_natural_order7;
          *(undefined4 *)(param_1 + 0x43) = 0x30;
          break;
        case 0x3f:
          goto switchD_00d6f35c_caseD_3f;
        case 0x50:
          iVar3 = 9;
          goto LAB_00d6f1e0;
        case 99:
          iVar3 = 10;
          goto LAB_00d6f1e0;
        default:
          if (iVar3 < 0xc3) {
            if (iVar3 == 0x78) {
              iVar3 = 0xb;
            }
            else if (iVar3 == 0x8f) {
              iVar3 = 0xc;
            }
            else {
              if (iVar3 != 0xa8) goto switchD_00d6f35c_caseD_1;
              iVar3 = 0xd;
            }
          }
          else if (iVar3 == 0xc3) {
            iVar3 = 0xe;
          }
          else if (iVar3 == 0xe0) {
            iVar3 = 0xf;
          }
          else {
            if (iVar3 != 0xff) goto switchD_00d6f35c_caseD_1;
            iVar3 = 0x10;
          }
LAB_00d6f1e0:
          param_1[0x42] = (long)jpeg_natural_order;
          *(int *)((long)param_1 + 0x20c) = iVar3;
          *(undefined4 *)(param_1 + 0x43) = 0x3f;
        }
        *(int *)(param_1 + 0x31) = iVar3;
        *(int *)((long)param_1 + 0x18c) = iVar3;
        if (0 < iVar2) {
          iVar2 = 1;
          piVar11 = (int *)(param_1[0x24] + 0x28);
          while( true ) {
            uVar1 = *(uint *)(param_1 + 6);
            piVar11[-1] = iVar3;
            *piVar11 = iVar3;
            iVar3 = jdiv_round_up((long)piVar11[-8] * (ulong)uVar1,
                                  (long)*(int *)(param_1 + 0x30) * (long)iVar3);
            uVar1 = *(uint *)((long)param_1 + 0x34);
            piVar11[-3] = iVar3;
            iVar3 = jdiv_round_up((long)piVar11[-7] * (ulong)uVar1,
                                  (long)*(int *)((long)param_1 + 0x20c) *
                                  (long)*(int *)((long)param_1 + 0x184));
            uVar1 = *(uint *)(param_1 + 6);
            piVar11[-2] = iVar3;
            iVar3 = jdiv_round_up((long)piVar11[-8] * (ulong)uVar1,(long)*(int *)(param_1 + 0x30));
            uVar1 = *(uint *)((long)param_1 + 0x34);
            piVar11[1] = iVar3;
            iVar4 = jdiv_round_up((long)piVar11[-7] * (ulong)uVar1,
                                  (long)*(int *)((long)param_1 + 0x184));
            iVar3 = *(int *)(param_1 + 7);
            piVar11[2] = iVar4;
            *(undefined *)(piVar11 + 3) = 1;
            *(undefined8 *)(piVar11 + 10) = 0;
            if (iVar3 <= iVar2) break;
            iVar3 = *(int *)((long)param_1 + 0x20c);
            piVar11 = piVar11 + 0x18;
            iVar2 = iVar2 + 1;
          }
          iVar3 = *(int *)((long)param_1 + 0x20c);
        }
        uVar5 = jdiv_round_up(*(undefined4 *)((long)param_1 + 0x34),
                              (long)iVar3 * (long)*(int *)((long)param_1 + 0x184));
        iVar2 = *(int *)(param_1 + 0x34);
        *(undefined4 *)(param_1 + 0x32) = uVar5;
        if (iVar2 < *(int *)(param_1 + 7)) {
          *(undefined *)(param_1[0x48] + 0x20) = 1;
        }
        else {
          *(bool *)(param_1[0x48] + 0x20) = *(char *)((long)param_1 + 0x129) != '\0';
        }
joined_r0x00d6f0b4:
        if (iVar2 != 0) {
          *(undefined4 *)(lVar9 + 0x28) = 0;
          return 1;
        }
        *(undefined4 *)(lVar9 + 0x28) = 2;
        iVar2 = (**(code **)(param_1[0x49] + 8))(param_1);
        if (iVar2 != 1) goto LAB_00d6efc4;
      }
      if (*(char *)(lVar9 + 0x20) == '\0') {
        ppcVar6 = (code **)*param_1;
        *(undefined4 *)(ppcVar6 + 5) = 0x24;
        (**ppcVar6)(param_1);
        iVar2 = *(int *)(param_1 + 0x34);
      }
      else {
        iVar2 = *(int *)(param_1 + 0x34);
      }
      if (iVar2 != 0) {
        FUN_00d6f59c(param_1);
        return 1;
      }
      iVar2 = (**(code **)(param_1[0x49] + 8))(param_1);
    }
LAB_00d6efc4:
    if (iVar2 == 2) {
      *(undefined *)(lVar9 + 0x21) = 1;
      if (*(int *)(lVar9 + 0x28) == 0) {
        iVar2 = 2;
        if (*(int *)((long)param_1 + 0x9c) < *(int *)((long)param_1 + 0xa4)) {
          *(int *)((long)param_1 + 0xa4) = *(int *)((long)param_1 + 0x9c);
        }
      }
      else if (*(char *)(param_1[0x49] + 0x19) == '\0') {
        iVar2 = 2;
      }
      else {
        ppcVar6 = (code **)*param_1;
        *(undefined4 *)(ppcVar6 + 5) = 0x3e;
        (**ppcVar6)(param_1);
        iVar2 = 2;
      }
    }
  }
  return iVar2;
}



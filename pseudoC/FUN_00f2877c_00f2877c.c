// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f2877c
// Entry Point: 00f2877c
// Size: 1096 bytes
// Signature: undefined FUN_00f2877c(void)


undefined8
FUN_00f2877c(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4,
            undefined *param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  uint uVar8;
  long *plVar9;
  undefined8 uVar10;
  long alStack_8f8 [29];
  long local_810;
  long local_808;
  long local_800;
  long local_7f8;
  undefined8 local_7f0;
  undefined8 auStack_7e8 [32];
  undefined auStack_6e8 [24];
  int local_6d0 [2];
  long local_6c8 [191];
  undefined auStack_d0 [48];
  undefined local_a0;
  byte local_9e;
  undefined auStack_98 [56];
  
  lVar1 = FUN_00f27bc8(param_1,param_3,auStack_98,auStack_d0,0);
  if (lVar1 == 0) {
    memset(auStack_6e8,0,0x618);
    uVar2 = FUN_00f28bc4(param_1,auStack_98,auStack_d0,param_2,4,auStack_6e8);
    if ((uVar2 & 1) != 0) {
      lVar1 = FUN_00f296e4(param_1,auStack_6e8,param_4);
      memcpy(alStack_8f8,param_4,0x210);
      piVar7 = local_6d0;
      uVar2 = 0;
      lVar6 = 0;
      plVar9 = alStack_8f8;
      local_800 = lVar1;
      do {
        if (*piVar7 == 0) {
          if (uVar2 == local_9e) {
            plVar5 = (long *)((long)param_4 + 0x100);
            switch(local_9e) {
            case 0x1d:
              plVar5 = (long *)((long)param_4 + 0xe8);
              break;
            case 0x1e:
              plVar5 = (long *)((long)param_4 + 0xf0);
              break;
            case 0x1f:
              plVar5 = (long *)((long)param_4 + 0xf8);
              break;
            case 0x20:
              break;
            default:
              if (0x1c < local_9e) {
                fprintf((FILE *)0x2249f40,"libunwind: %s - %s\n","getRegister",
                        "unsupported arm64 register");
                fflush((FILE *)0x2249f40);
                    /* WARNING: Subroutine does not return */
                abort();
              }
              plVar5 = (long *)((long)param_4 + (ulong)local_9e * 8);
              break;
            case 0x22:
              plVar5 = (long *)((long)param_4 + 0x108);
            }
            lVar6 = *plVar5;
          }
          goto LAB_00f288cc;
        }
        uVar8 = (uint)uVar2;
        if ((uVar8 & 0x7fffffe0) == 0x40) {
          uVar10 = 0;
          switch(*piVar7) {
          case 1:
            break;
          case 2:
            uVar10 = *(undefined8 *)(*(long *)(piVar7 + 2) + lVar1);
            break;
          default:
            fprintf((FILE *)0x2249f40,"libunwind: %s - %s\n","getSavedFloatRegister",
                    "unsupported restore location for float register");
            fflush((FILE *)0x2249f40);
                    /* WARNING: Subroutine does not return */
            abort();
          case 4:
            uVar10 = *(undefined8 *)
                      ((long)param_4 +
                      ((*(long *)(piVar7 + 2) << 0x20) + -0x4000000000 >> 0x1d) + 0x110);
            break;
          case 5:
            puVar4 = (undefined8 *)FUN_00f29ec0(*(undefined8 *)(piVar7 + 2),param_1,param_4,lVar1);
            uVar10 = *puVar4;
          }
          auStack_7e8[uVar8 - 0x40] = uVar10;
          goto LAB_00f288cc;
        }
        if (uVar2 == local_9e) {
          lVar6 = FUN_00f297e0(param_1,param_4,lVar1,piVar7);
          goto LAB_00f288cc;
        }
        if (uVar2 == 0x22) {
          local_7f0 = FUN_00f297e0(param_1,param_4,lVar1,piVar7);
          goto LAB_00f288cc;
        }
        if (0xffffffe0 < uVar8 - 0x40) {
          return 0xffffe672;
        }
        lVar3 = FUN_00f297e0(param_1,param_4,lVar1,piVar7);
        plVar5 = &local_800;
        switch(uVar8) {
        case 0x1d:
          local_810 = lVar3;
          goto LAB_00f288cc;
        case 0x1e:
          local_808 = lVar3;
          goto LAB_00f288cc;
        case 0x1f:
          break;
        case 0x20:
          plVar5 = &local_7f8;
          break;
        default:
          plVar5 = plVar9;
          if (0x1c < uVar2) {
            fprintf((FILE *)0x2249f40,"libunwind: %s - %s\n","setRegister",
                    "unsupported arm64 register");
            fflush((FILE *)0x2249f40);
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        *plVar5 = lVar3;
LAB_00f288cc:
        uVar2 = uVar2 + 1;
        piVar7 = piVar7 + 4;
        plVar9 = plVar9 + 1;
        if (uVar2 == 0x60) {
          *param_5 = local_a0;
          local_7f8 = lVar6;
          memcpy(param_4,alStack_8f8,0x210);
          return 1;
        }
      } while( true );
    }
  }
  return 0xffffe66e;
}



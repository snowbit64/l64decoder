// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3aff8
// Entry Point: 00d3aff8
// Size: 796 bytes
// Signature: undefined FUN_00d3aff8(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined8 param_9, undefined param_10, undefined8 param_11)


void FUN_00d3aff8(code *param_1,int param_2,long param_3,long param_4,long param_5,long *param_6,
                 long *param_7,long *param_8,long *param_9,undefined8 *param_10,undefined4 *param_11
                 )

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_a0;
  long local_98;
  long local_90;
  long local_88;
  byte *local_80;
  long local_78;
  byte local_6c [4];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_98 = 0;
  local_90 = 0;
  local_a0 = 0;
  param_5 = param_5 + (long)*(int *)(param_3 + 0x80) * -2;
  local_88 = param_4 + (long)*(int *)(param_3 + 0x80) * 5;
  iVar3 = FUN_00d463d4(param_3,local_88,param_5,&local_98,&local_a0,&local_90,&local_88);
  lVar7 = local_98;
  uVar4 = local_a0;
  lVar8 = local_88;
  if ((iVar3 != 0) && (local_98 != 0)) {
    iVar3 = (**(code **)(param_3 + 0x30))(param_3,local_98,local_a0,"version");
    if (iVar3 == 0) {
      lVar8 = lVar7;
      if (param_2 != 0) {
LAB_00d3b0f0:
        iVar3 = (**(code **)(param_3 + 0x30))(param_3,lVar7,uVar4,"encoding");
        lVar8 = local_90;
        if (iVar3 == 0) {
LAB_00d3b1b8:
          iVar3 = (**(code **)(param_3 + 0x30))(param_3,lVar7,uVar4,"standalone");
          lVar9 = local_88;
          lVar2 = local_90;
          lVar8 = lVar7;
          if ((param_2 == 0) && (iVar3 != 0)) {
            iVar3 = (**(code **)(param_3 + 0x30))
                              (param_3,local_90,local_88 - *(int *)(param_3 + 0x80),&DAT_00547a68);
            if (iVar3 == 0) {
              iVar3 = (**(code **)(param_3 + 0x30))
                                (param_3,lVar2,lVar9 - *(int *)(param_3 + 0x80),&DAT_00547a6c);
              lVar8 = lVar2;
              if (iVar3 == 0) goto LAB_00d3b21c;
              if (param_11 != (undefined4 *)0x0) {
                uVar5 = 0;
                goto LAB_00d3b280;
              }
            }
            else if (param_11 != (undefined4 *)0x0) {
              uVar5 = 1;
LAB_00d3b280:
              *param_11 = uVar5;
            }
            while( true ) {
              local_80 = local_6c;
              local_78 = lVar9;
              (**(code **)(param_3 + 0x70))(param_3,&local_78,param_5,&local_80,(ulong)local_6c | 1)
              ;
              uVar6 = (uint)local_6c[0];
              if (local_80 == local_6c) {
                uVar6 = 0xffffffff;
              }
              if ((0x20 < uVar6) || ((1L << ((ulong)uVar6 & 0x3f) & 0x100002600U) == 0)) break;
              lVar9 = lVar9 + *(int *)(param_3 + 0x80);
            }
            lVar8 = lVar9;
            local_88 = lVar9;
            if (lVar9 == param_5) goto LAB_00d3b2fc;
          }
        }
        else {
          local_78 = local_90;
          local_80 = local_6c;
          (**(code **)(param_3 + 0x70))(param_3,&local_78,param_5,&local_80,(ulong)local_6c | 1);
          lVar7 = local_88;
          if ((local_80 != local_6c) && ((local_6c[0] & 0xffffffdf) - 0x41 < 0x1a)) {
            if (param_9 != (long *)0x0) {
              *param_9 = lVar8;
            }
            if (param_10 != (undefined8 *)0x0) {
              uVar4 = (*param_1)(param_3,lVar8,local_88 - *(int *)(param_3 + 0x80));
              *param_10 = uVar4;
            }
            iVar3 = FUN_00d463d4(param_3,lVar7,param_5,&local_98,&local_a0,&local_90,&local_88);
            lVar8 = local_88;
            if (iVar3 != 0) {
              lVar7 = local_98;
              uVar4 = local_a0;
              if (local_98 == 0) goto LAB_00d3b2fc;
              goto LAB_00d3b1b8;
            }
          }
        }
      }
    }
    else {
      if (param_7 != (long *)0x0) {
        *param_7 = local_90;
      }
      if (param_8 != (long *)0x0) {
        *param_8 = local_88;
      }
      iVar3 = FUN_00d463d4(param_3,local_88,param_5,&local_98,&local_a0,&local_90,&local_88);
      lVar8 = local_88;
      if (iVar3 != 0) {
        lVar7 = local_98;
        uVar4 = local_a0;
        if (local_98 != 0) goto LAB_00d3b0f0;
        if (param_2 == 0) {
LAB_00d3b2fc:
          uVar4 = 1;
          if (*(long *)(lVar1 + 0x28) == local_68) {
            return;
          }
          goto LAB_00d3b310;
        }
      }
    }
  }
LAB_00d3b21c:
  uVar4 = 0;
  *param_6 = lVar8;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
LAB_00d3b310:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}



// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PutMaybeModifiable
// Entry Point: 00cd703c
// Size: 844 bytes
// Signature: undefined __thiscall PutMaybeModifiable(MeterFilter * this, uchar * param_1, ulong param_2, int param_3, bool param_4, bool param_5)


/* CryptoPP::MeterFilter::PutMaybeModifiable(unsigned char*, unsigned long, int, bool, bool) */

ulong __thiscall
CryptoPP::MeterFilter::PutMaybeModifiable
          (MeterFilter *this,uchar *param_1,ulong param_2,int param_3,bool param_4,bool param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  void *pvVar12;
  long lVar13;
  undefined8 uVar14;
  
  if (this[0x2c] != (MeterFilter)0x0) {
    iVar5 = *(int *)(this + 0x28);
    if (iVar5 == 2) goto LAB_00cd7218;
    if (iVar5 == 1) goto LAB_00cd7118;
    if (iVar5 == 0) {
      *(undefined8 *)(this + 0x20) = 0;
      *(uchar **)(this + 0x80) = param_1;
      *(ulong *)(this + 0x88) = param_2;
      do {
        while( true ) {
          if ((param_2 == 0) && (param_3 == 0)) {
            return 0;
          }
          if ((param_2 != 0) && (*(long *)(this + 0x78) != 0)) break;
LAB_00cd7218:
          uVar14 = *(undefined8 *)(this + 0x80);
          uVar4 = *(undefined8 *)(this + 0x88);
          iVar5 = 0;
          if (param_3 != 0) {
            iVar5 = param_3 + -1;
          }
          plVar6 = (long *)(**(code **)(*(long *)this + 0x160))(this);
          lVar9 = 0x138;
          if (!param_5) {
            lVar9 = 0x130;
          }
          lVar9 = (**(code **)(*plVar6 + lVar9))(plVar6,&DEFAULT_CHANNEL,uVar14,uVar4,iVar5,param_4)
          ;
          lVar7 = *(long *)(this + 0x88);
          *(uint *)(this + 0x28) = (uint)(lVar9 != 0) << 1;
          if (lVar9 != 0) {
            uVar8 = lVar7 - *(long *)(this + 0x20);
LAB_00cd7368:
            if (uVar8 < 2) {
              uVar8 = 1;
            }
            return uVar8;
          }
          param_2 = 0;
          *(undefined8 *)(this + 0x88) = 0;
          *(long *)(this + 0x38) = *(long *)(this + 0x38) + lVar7;
          *(long *)(this + 0x30) = *(long *)(this + 0x30) + lVar7;
          if (param_3 != 0) {
            param_3 = 0;
            *(undefined8 *)(this + 0x30) = 0;
            *(ulong *)(this + 0x40) =
                 CONCAT44((int)((ulong)*(undefined8 *)(this + 0x40) >> 0x20) + 1,
                          (int)*(undefined8 *)(this + 0x40) + 1);
          }
        }
        uVar8 = *(ulong *)(this + 0x70) % 0xaa;
        lVar9 = *(long *)(*(long *)(this + 0x58) + (*(ulong *)(this + 0x70) / 0xaa) * 8);
        if ((*(int *)(lVar9 + uVar8 * 0x18) != *(int *)(this + 0x44)) ||
           (*(long *)(this + 0x30) + param_2 <= *(ulong *)(lVar9 + uVar8 * 0x18 + 8)))
        goto LAB_00cd7218;
LAB_00cd7118:
        uVar14 = *(undefined8 *)(this + 0x80);
        uVar8 = *(ulong *)(*(long *)(*(long *)(this + 0x58) + (*(ulong *)(this + 0x70) / 0xaa) * 8)
                           + (*(ulong *)(this + 0x70) % 0xaa) * 0x18 + 8);
        lVar9 = 0;
        if (*(ulong *)(this + 0x30) <= uVar8) {
          lVar9 = uVar8 - *(ulong *)(this + 0x30);
        }
        plVar6 = (long *)(**(code **)(*(long *)this + 0x160))(this);
        lVar7 = 0x138;
        if (!param_5) {
          lVar7 = 0x130;
        }
        lVar7 = (**(code **)(*plVar6 + lVar7))(plVar6,&DEFAULT_CHANNEL,uVar14,lVar9,0,param_4);
        *(uint *)(this + 0x28) = (uint)(lVar7 != 0);
        if (lVar7 != 0) {
          uVar8 = *(ulong *)(*(long *)(*(long *)(this + 0x58) + (*(ulong *)(this + 0x70) / 0xaa) * 8
                                      ) + (*(ulong *)(this + 0x70) % 0xaa) * 0x18 + 8);
          lVar9 = 0;
          if (*(ulong *)(this + 0x30) <= uVar8) {
            lVar9 = uVar8 - *(ulong *)(this + 0x30);
          }
          uVar8 = lVar9 - *(long *)(this + 0x20);
          goto LAB_00cd7368;
        }
        uVar11 = *(ulong *)(this + 0x70);
        lVar3 = *(long *)(this + 0x88);
        lVar7 = *(long *)(this + 0x80) + lVar9;
        lVar10 = lVar3 - lVar9;
        *(long *)(this + 0x80) = lVar7;
        pvVar12 = (*(void ***)(this + 0x58))[uVar11 / 0xaa];
        *(long *)(this + 0x88) = lVar10;
        lVar2 = *(long *)(this + 0x30);
        uVar8 = lVar2 + lVar9;
        lVar9 = *(long *)(this + 0x38) + lVar9;
        uVar1 = *(long *)((long)pvVar12 + (uVar11 % 0xaa) * 0x18 + 0x10) +
                *(long *)((long)pvVar12 + (uVar11 % 0xaa) * 0x18 + 8);
        *(ulong *)(this + 0x30) = uVar8;
        *(long *)(this + 0x38) = lVar9;
        lVar13 = lVar10;
        if (uVar1 <= (ulong)(lVar2 + lVar3)) {
          lVar13 = 0;
          if (uVar8 <= uVar1) {
            lVar13 = uVar1 - uVar8;
          }
          *(ulong *)(this + 0x70) = uVar11 + 1;
          *(long *)(this + 0x78) = *(long *)(this + 0x78) + -1;
          if (0x153 < uVar11 + 1) {
            operator_delete(**(void ***)(this + 0x58));
            lVar7 = *(long *)(this + 0x80);
            lVar10 = *(long *)(this + 0x88);
            uVar8 = *(ulong *)(this + 0x30);
            lVar9 = *(long *)(this + 0x38);
            *(long *)(this + 0x58) = *(long *)(this + 0x58) + 8;
            *(long *)(this + 0x70) = *(long *)(this + 0x70) + -0xaa;
          }
        }
        param_2 = lVar10 - lVar13;
        *(long *)(this + 0x80) = lVar7 + lVar13;
        *(ulong *)(this + 0x88) = param_2;
        *(ulong *)(this + 0x30) = uVar8 + lVar13;
        *(long *)(this + 0x38) = lVar9 + lVar13;
      } while( true );
    }
  }
  return 0;
}



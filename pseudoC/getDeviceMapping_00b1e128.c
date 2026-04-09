// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDeviceMapping
// Entry Point: 00b1e128
// Size: 856 bytes
// Signature: undefined __thiscall getDeviceMapping(DeviceMappingManager * this, char * param_1, ushort param_2, ushort param_3, ushort param_4, char * param_5)


/* DeviceMappingManager::getDeviceMapping(char const*, unsigned short, unsigned short, unsigned
   short, char const*) */

DeviceMappingManager ** __thiscall
DeviceMappingManager::getDeviceMapping
          (DeviceMappingManager *this,char *param_1,ushort param_2,ushort param_3,ushort param_4,
          char *param_5)

{
  DeviceMappingManager **ppDVar1;
  ushort *puVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  DeviceMappingManager **ppDVar7;
  byte *pbVar8;
  DeviceMappingManager *pDVar9;
  long lVar10;
  long *plVar11;
  DeviceMappingManager **ppDVar12;
  long *plVar13;
  byte *pbVar14;
  ulong uVar15;
  DeviceMappingManager **ppDVar16;
  ulong uVar17;
  DeviceMappingManager **ppDVar18;
  ulong uVar19;
  long local_80;
  ulong local_78;
  
  ppDVar18 = (DeviceMappingManager **)(this + 8);
  ppDVar7 = (DeviceMappingManager **)*ppDVar18;
  ppDVar12 = ppDVar7;
  ppDVar16 = ppDVar18;
  if (ppDVar7 == (DeviceMappingManager **)0x0) goto LAB_00b1e2c4;
  do {
    bVar4 = param_2 <= *(ushort *)(ppDVar12 + 4);
    if ((*(ushort *)(ppDVar12 + 4) == param_2) &&
       (bVar4 = param_3 <= *(ushort *)((long)ppDVar12 + 0x22),
       *(ushort *)((long)ppDVar12 + 0x22) == param_3)) {
      bVar4 = param_4 <= *(ushort *)((long)ppDVar12 + 0x24);
    }
    lVar6 = 8;
    if (bVar4) {
      lVar6 = 0;
      ppDVar16 = ppDVar12;
    }
    ppDVar1 = (DeviceMappingManager **)((long)ppDVar12 + lVar6);
    ppDVar12 = (DeviceMappingManager **)*ppDVar1;
  } while ((DeviceMappingManager **)*ppDVar1 != (DeviceMappingManager **)0x0);
  ppDVar12 = ppDVar18;
  if (ppDVar16 == ppDVar18) {
LAB_00b1e220:
    if ((param_4 == 0xffff) || (ppDVar7 == (DeviceMappingManager **)0x0)) goto LAB_00b1e2c4;
  }
  else {
    bVar5 = param_2 <= *(ushort *)(ppDVar16 + 4);
    bVar4 = *(ushort *)(ppDVar16 + 4) == param_2;
    if (!bVar4) {
LAB_00b1e1ec:
      if (!bVar5 || bVar4) {
LAB_00b1e1f0:
        if (param_5 == (char *)0x0) {
LAB_00b1e214:
          return ppDVar16 + 0xb;
        }
        pDVar9 = ppDVar16[7];
        if (((byte)*(DeviceMappingManager *)(ppDVar16 + 5) & 1) == 0) {
          pDVar9 = (DeviceMappingManager *)((long)ppDVar16 + 0x29);
        }
        lVar6 = StringUtil::stristr((char *)pDVar9,param_5);
        if (lVar6 != 0) goto LAB_00b1e214;
        ppDVar7 = (DeviceMappingManager **)*ppDVar18;
      }
      goto LAB_00b1e220;
    }
    bVar5 = param_3 <= *(ushort *)((long)ppDVar16 + 0x22);
    bVar4 = *(ushort *)((long)ppDVar16 + 0x22) == param_3;
    if (!bVar4) goto LAB_00b1e1ec;
    if (*(ushort *)((long)ppDVar16 + 0x24) <= param_4) goto LAB_00b1e1f0;
  }
  do {
    bVar4 = param_2 <= *(ushort *)(ppDVar7 + 4);
    if ((*(ushort *)(ppDVar7 + 4) == param_2) &&
       (bVar4 = param_3 <= *(ushort *)((long)ppDVar7 + 0x22),
       *(ushort *)((long)ppDVar7 + 0x22) == param_3)) {
      bVar4 = *(short *)((long)ppDVar7 + 0x24) != -1;
    }
    else {
      bVar4 = !bVar4;
    }
    lVar6 = 8;
    if (!bVar4) {
      lVar6 = 0;
      ppDVar12 = ppDVar7;
    }
    ppDVar7 = *(DeviceMappingManager ***)((long)ppDVar7 + lVar6);
  } while (ppDVar7 != (DeviceMappingManager **)0x0);
  if (ppDVar12 != ppDVar18) {
    bVar5 = param_2 <= *(ushort *)(ppDVar12 + 4);
    bVar4 = *(ushort *)(ppDVar12 + 4) == param_2;
    if (bVar4) {
      bVar5 = param_3 <= *(ushort *)((long)ppDVar12 + 0x22);
      bVar4 = *(ushort *)((long)ppDVar12 + 0x22) == param_3;
    }
    if (!bVar5 || bVar4) {
      if (param_5 != (char *)0x0) {
        pDVar9 = ppDVar12[7];
        if (((byte)*(DeviceMappingManager *)(ppDVar12 + 5) & 1) == 0) {
          pDVar9 = (DeviceMappingManager *)((long)ppDVar12 + 0x29);
        }
        lVar6 = StringUtil::stristr((char *)pDVar9,param_5);
        if (lVar6 == 0) goto LAB_00b1e2c4;
      }
      return ppDVar12 + 0xb;
    }
  }
LAB_00b1e2c4:
  if ((param_1 != (char *)0x0) &&
     (local_80 = *(long *)(this + 0x18), *(long *)(this + 0x20) != local_80)) {
    local_78 = 0;
    do {
      if (param_5 == (char *)0x0) {
LAB_00b1e368:
        lVar10 = local_80 + local_78 * 0xbe8;
        plVar11 = (long *)(lVar10 + 0x18);
        lVar6 = *plVar11;
        plVar13 = (long *)(lVar10 + 0x20);
        if (*plVar13 != lVar6) {
          uVar17 = 0;
          do {
            puVar2 = (ushort *)(lVar6 + uVar17 * 0x20);
            lVar6 = *(long *)(puVar2 + 4);
            if (*(long *)(puVar2 + 8) == lVar6) {
LAB_00b1e448:
              return (DeviceMappingManager **)(local_80 + local_78 * 0xbe8 + 0x30);
            }
            uVar15 = 0;
            uVar19 = 1;
            do {
              pbVar8 = (byte *)(lVar6 + uVar15 * 0x18);
              pbVar14 = *(byte **)(pbVar8 + 0x10);
              if ((*pbVar8 & 1) == 0) {
                pbVar14 = pbVar8 + 1;
              }
              lVar6 = StringUtil::stristr(param_1,(char *)pbVar14);
              if (lVar6 == 0) goto LAB_00b1e398;
              uVar3 = *puVar2;
              if ((uVar3 != 0xffff) && (uVar3 != param_2)) break;
              lVar6 = *(long *)(puVar2 + 4);
              uVar15 = (*(long *)(puVar2 + 8) - lVar6 >> 3) * -0x5555555555555555;
              bVar4 = uVar19 <= uVar15;
              lVar10 = uVar15 - uVar19;
              uVar15 = uVar19;
              uVar19 = (ulong)((int)uVar19 + 1);
            } while (bVar4 && lVar10 != 0);
            if ((uVar3 == 0xffff) || (uVar3 == param_2)) goto LAB_00b1e448;
LAB_00b1e398:
            uVar17 = (ulong)((int)uVar17 + 1);
            lVar6 = *plVar11;
          } while (uVar17 < (ulong)(*plVar13 - lVar6 >> 5));
        }
      }
      else {
        pbVar8 = (byte *)(local_80 + local_78 * 0xbe8);
        pbVar14 = pbVar8 + 1;
        if ((*pbVar8 & 1) != 0) {
          pbVar14 = *(byte **)(local_80 + local_78 * 0xbe8 + 0x10);
        }
        lVar6 = StringUtil::stristr((char *)pbVar14,param_5);
        if (lVar6 != 0) goto LAB_00b1e368;
      }
      local_80 = *(long *)(this + 0x18);
      uVar17 = (*(long *)(this + 0x20) - local_80 >> 3) * -0x2b00ac02b00ac02b;
      local_78 = (ulong)((int)local_78 + 1);
    } while (local_78 <= uVar17 && uVar17 - local_78 != 0);
  }
  return (DeviceMappingManager **)0x0;
}



// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Put2
// Entry Point: 00d1e0a4
// Size: 332 bytes
// Signature: undefined __cdecl Put2(uchar * param_1, ulong param_2, int param_3, bool param_4)


/* CryptoPP::ByteQueue::Put2(unsigned char const*, unsigned long, int, bool) */

undefined8 CryptoPP::ByteQueue::Put2(uchar *param_1,ulong param_2,int param_3,bool param_4)

{
  size_t __n;
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  
  uVar6 = (ulong)(uint)param_3;
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    (**(code **)(*(long *)param_1 + 0x38))(param_1,*(undefined8 *)(param_1 + 0x30),lVar2,0,1);
  }
  if ((uVar6 != 0) && (param_2 != 0)) {
    puVar7 = *(undefined8 **)(param_1 + 0x28);
    lVar2 = puVar7[4];
    while( true ) {
      lVar4 = puVar7[6];
      uVar8 = puVar7[3] - lVar4;
      __n = uVar8;
      if (uVar6 <= uVar8) {
        __n = uVar6;
      }
      if ((void *)(lVar2 + lVar4) != (void *)param_2) {
        memcpy((void *)(lVar2 + lVar4),(void *)param_2,__n);
        lVar4 = puVar7[6];
      }
      puVar7[6] = lVar4 + __n;
      if (uVar6 <= uVar8) break;
      uVar6 = uVar6 - __n;
      uVar8 = *(ulong *)(param_1 + 0x18);
      if ((param_1[0x14] != '\0') && (uVar3 = uVar8, uVar8 >> 0xe == 0)) {
        do {
          uVar8 = uVar3 << 1;
          if (uVar6 <= uVar8) break;
          bVar1 = uVar3 < 0x2000;
          uVar3 = uVar8;
        } while (bVar1);
        *(ulong *)(param_1 + 0x18) = uVar8;
      }
      puVar7 = (undefined8 *)operator_new(0x38);
      uVar3 = uVar6;
      if (uVar6 <= uVar8) {
        uVar3 = uVar8;
      }
      puVar7[2] = 0xffffffffffffffff;
      puVar7[3] = uVar3;
      if (uVar3 == 0) {
        lVar2 = 0;
      }
      else {
                    /* try { // try from 00d1e1a0 to 00d1e1a3 has its CatchHandler @ 00d1e1f0 */
        lVar2 = UnalignedAllocate(uVar3);
      }
      puVar5 = *(undefined8 **)(param_1 + 0x28);
      *puVar7 = 0;
      puVar7[5] = 0;
      puVar7[6] = 0;
      puVar7[4] = lVar2;
      *puVar5 = puVar7;
      *(undefined8 **)(param_1 + 0x28) = puVar7;
      if (uVar6 == 0) {
        return 0;
      }
      bVar1 = (void *)param_2 == (void *)0x0;
      param_2 = (ulong)(param_2 + __n);
      if (bVar1) {
        return 0;
      }
    }
  }
  return 0;
}



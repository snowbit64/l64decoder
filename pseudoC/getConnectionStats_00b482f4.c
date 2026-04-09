// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getConnectionStats
// Entry Point: 00b482f4
// Size: 296 bytes
// Signature: undefined __thiscall getConnectionStats(ENetNetworkManager * this, uint * param_1, uint * param_2, float * param_3, float * param_4, float * param_5)


/* ENetNetworkManager::getConnectionStats(unsigned int const&, unsigned int&, float&, float&,
   float&) */

undefined8 __thiscall
ENetNetworkManager::getConnectionStats
          (ENetNetworkManager *this,uint *param_1,uint *param_2,float *param_3,float *param_4,
          float *param_5)

{
  int iVar1;
  ENetNetworkManager **ppEVar2;
  ENetNetworkManager **ppEVar3;
  ENetNetworkManager **ppEVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  uint uVar8;
  double dVar9;
  float fVar10;
  
  Mutex::enterCriticalSection();
  ppEVar3 = (ENetNetworkManager **)(this + 0x18);
  ppEVar4 = (ENetNetworkManager **)*ppEVar3;
  if (ppEVar4 != (ENetNetworkManager **)0x0) {
    uVar8 = *param_1;
    ppEVar2 = ppEVar3;
    do {
      if (*(uint *)(ppEVar4 + 4) >= uVar8) {
        ppEVar2 = ppEVar4;
      }
      ppEVar4 = (ENetNetworkManager **)ppEVar4[*(uint *)(ppEVar4 + 4) < uVar8];
    } while (ppEVar4 != (ENetNetworkManager **)0x0);
    if ((ppEVar2 != ppEVar3) && (*(uint *)(ppEVar2 + 4) <= uVar8)) {
      plVar6 = (long *)ppEVar2[5];
      lVar5 = *(long *)(this + 8);
      *param_2 = *(uint *)(*plVar6 + 200);
      iVar1 = enet_time_get();
      uVar8 = iVar1 - *(int *)(lVar5 + 0x14);
      if (uVar8 == 0) {
        fVar10 = 0.0;
        lVar5 = *plVar6;
        *param_3 = 0.0;
      }
      else {
        lVar5 = *plVar6;
        fVar10 = (float)(ulong)uVar8;
        fVar7 = (float)NEON_ucvtf(*(undefined4 *)(lVar5 + 0x60));
        *param_3 = (fVar7 * 1000.0) / fVar10;
        fVar7 = (float)NEON_ucvtf(*(undefined4 *)(lVar5 + 100));
        fVar10 = (fVar7 * 1000.0) / fVar10;
      }
      uVar8 = *(uint *)(lVar5 + 0x84);
      *param_4 = fVar10;
      dVar9 = (double)NEON_ucvtf((ulong)uVar8);
      *param_5 = (float)(dVar9 * 1.52587890625e-05);
    }
  }
  Mutex::leaveCriticalSection();
  return 0;
}



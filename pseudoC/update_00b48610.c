// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00b48610
// Size: 476 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ENetNetworkManager::update() */

void ENetNetworkManager::update(void)

{
  undefined8 uVar1;
  uint uVar2;
  bool bVar3;
  long in_x0;
  ulong uVar4;
  long **pplVar5;
  undefined8 uVar6;
  long *plVar7;
  GsBitStream *this;
  ulong uVar8;
  long **pplVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  if ((*(long *)(in_x0 + 8) != 0) && (*(char *)(in_x0 + 0x1b0) != '\0')) {
    Mutex::enterCriticalSection();
    pplVar9 = *(long ***)(in_x0 + 0x10);
    while (pplVar9 != (long **)(in_x0 + 0x18)) {
      ENetConnection::update((ENetNetworkManager *)pplVar9[5]);
      pplVar5 = (long **)pplVar9[1];
      if ((long **)pplVar9[1] == (long **)0x0) {
        pplVar5 = pplVar9 + 2;
        bVar3 = (long **)**pplVar5 != pplVar9;
        pplVar9 = (long **)*pplVar5;
        if (bVar3) {
          do {
            plVar7 = *pplVar5;
            pplVar5 = (long **)(plVar7 + 2);
            pplVar9 = (long **)*pplVar5;
          } while (*pplVar9 != plVar7);
        }
      }
      else {
        do {
          pplVar9 = pplVar5;
          pplVar5 = (long **)*pplVar9;
        } while (*pplVar9 != (long *)0x0);
      }
    }
    uVar1 = *(undefined8 *)(in_x0 + 0x108);
    uVar12 = *(undefined8 *)(in_x0 + 0x118);
    uVar6 = *(undefined8 *)(in_x0 + 0x110);
    *(undefined8 *)(in_x0 + 0x110) = *(undefined8 *)(in_x0 + 0x128);
    *(undefined8 *)(in_x0 + 0x118) = *(undefined8 *)(in_x0 + 0x100);
    *(undefined8 *)(in_x0 + 0x108) = *(undefined8 *)(in_x0 + 0x120);
    *(undefined8 *)(in_x0 + 0x100) = uVar12;
    *(undefined8 *)(in_x0 + 0x120) = uVar1;
    *(undefined8 *)(in_x0 + 0x128) = uVar6;
    Mutex::leaveCriticalSection();
    lVar10 = *(long *)(in_x0 + 0x100);
    if (*(long *)(in_x0 + 0x108) == lVar10) {
      *(undefined4 *)(in_x0 + 0xfc) = 0xffffffff;
    }
    else {
      uVar8 = 0;
      do {
        *(int *)(in_x0 + 0xfc) = (int)uVar8;
        uVar2 = *(uint *)(lVar10 + uVar8 * 0x28);
        if (uVar2 == 3) {
          lVar11 = 0;
          while( true ) {
            plVar7 = *(long **)(in_x0 + 0x1b8 + lVar11 * 8);
            if (((plVar7 != (long *)0x0) &&
                (uVar4 = (**(code **)(*plVar7 + 0x10))(plVar7,lVar10 + uVar8 * 0x28 + 8),
                (uVar4 & 1) != 0)) || (1 < (uint)lVar11)) break;
            lVar11 = lVar11 + 1;
          }
        }
        else {
          plVar7 = *(long **)(in_x0 + (ulong)uVar2 * 8 + 0x1b8);
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x10))(plVar7,lVar10 + uVar8 * 0x28 + 8);
          }
        }
        this = *(GsBitStream **)(lVar10 + uVar8 * 0x28 + 8);
        if (this != (GsBitStream *)0x0) {
          GsBitStream::~GsBitStream(this);
          operator_delete(this);
        }
        lVar10 = *(long *)(in_x0 + 0x100);
        uVar8 = (ulong)((int)uVar8 + 1);
        lVar11 = *(long *)(in_x0 + 0x108) - lVar10;
        uVar4 = (lVar11 >> 3) * -0x3333333333333333;
      } while (uVar8 <= uVar4 && uVar4 - uVar8 != 0);
      *(undefined4 *)(in_x0 + 0xfc) = 0xffffffff;
      if (lVar11 != 0) {
        *(long *)(in_x0 + 0x108) = lVar10;
      }
    }
  }
  return;
}



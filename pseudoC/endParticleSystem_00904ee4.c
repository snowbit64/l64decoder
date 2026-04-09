// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: endParticleSystem
// Entry Point: 00904ee4
// Size: 404 bytes
// Signature: undefined __cdecl endParticleSystem(void * param_1, char * param_2)


/* I3DDynamicsPoolFactory::endParticleSystem(void*, char const*) */

void I3DDynamicsPoolFactory::endParticleSystem(void *param_1,char *param_2)

{
  char *pcVar1;
  uint uVar2;
  long lVar3;
  ParticleSystem *this;
  StreamManager *this_00;
  GsShape *this_01;
  long *plVar4;
  long **pplVar5;
  ParticleSystemDesc *pPVar6;
  long **pplVar7;
  long **pplVar8;
  byte local_60 [16];
  char *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pPVar6 = *(ParticleSystemDesc **)((long)param_1 + 0x290);
  if (*(int *)(pPVar6 + 0xa8) != 0) {
    this = (ParticleSystem *)operator_new(0x1c8);
                    /* try { // try from 00904f24 to 00904f2f has its CatchHandler @ 0090509c */
    ParticleSystem::ParticleSystem(this,pPVar6,true);
    this_00 = (StreamManager *)StreamManager::getInstance();
    StreamManager::addStreamable
              (this_00,(Streamable *)(this + 0x80),*(STREAM_QUEUE *)((long)param_1 + 0x254));
    this_01 = (GsShape *)operator_new(0x200);
                    /* try { // try from 00904f50 to 00904f63 has its CatchHandler @ 00905090 */
    FUN_006cadd8(local_60,pPVar6 + 0x80,"_Prototype");
    pcVar1 = (char *)((ulong)local_60 | 1);
    if ((local_60[0] & 1) != 0) {
      pcVar1 = local_50;
    }
                    /* try { // try from 00904f78 to 00904f83 has its CatchHandler @ 00905078 */
    GsShape::GsShape(this_01,pcVar1,(Geometry *)this);
    if ((local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
    pplVar5 = (long **)((long)param_1 + 0x108);
    uVar2 = *(uint *)(*(long *)((long)param_1 + 0x290) + 0xa8);
    pplVar7 = *(long ***)((long)param_1 + 0x108);
    pplVar8 = pplVar5;
    while (pplVar7 != (long **)0x0) {
      while (pplVar8 = pplVar7, uVar2 < *(uint *)(pplVar8 + 4)) {
        pplVar5 = pplVar8;
        pplVar7 = (long **)*pplVar8;
        if ((long **)*pplVar8 == (long **)0x0) {
          plVar4 = *pplVar8;
          goto joined_r0x00904fec;
        }
      }
      if (uVar2 <= *(uint *)(pplVar8 + 4)) break;
      pplVar5 = pplVar8 + 1;
      pplVar7 = (long **)*pplVar5;
    }
    plVar4 = *pplVar5;
joined_r0x00904fec:
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)operator_new(0x30);
      *(uint *)(plVar4 + 4) = uVar2;
      plVar4[5] = (long)this_01;
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[2] = (long)pplVar8;
      *pplVar5 = plVar4;
      if (**(long **)((long)param_1 + 0x100) != 0) {
        *(long *)((long)param_1 + 0x100) = **(long **)((long)param_1 + 0x100);
        plVar4 = *pplVar5;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)((long)param_1 + 0x108),(__tree_node_base *)plVar4);
      *(long *)((long)param_1 + 0x110) = *(long *)((long)param_1 + 0x110) + 1;
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



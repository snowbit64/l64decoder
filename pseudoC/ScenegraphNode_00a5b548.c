// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScenegraphNode
// Entry Point: 00a5b548
// Size: 220 bytes
// Signature: undefined __thiscall ~ScenegraphNode(ScenegraphNode * this)


/* ScenegraphNode::~ScenegraphNode() */

void __thiscall ScenegraphNode::~ScenegraphNode(ScenegraphNode *this)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long **pplVar4;
  long **pplVar5;
  long **pplVar6;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  pplVar4 = *(long ***)(this + 0x48);
  pplVar5 = *(long ***)(this + 0x50);
  *(undefined ***)this = &PTR__ScenegraphNode_00fe39b0;
  if (pplVar4 != pplVar5) {
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    pplVar6 = pplVar4;
    do {
                    /* try { // try from 00a5b5b8 to 00a5b5bf has its CatchHandler @ 00a5b624 */
      (**(code **)(**pplVar6 + 0x10))(*pplVar6,this);
      pplVar6 = pplVar6 + 1;
    } while (pplVar6 != pplVar5);
    if (pplVar4 != (long **)0x0) {
      operator_delete(pplVar4);
    }
  }
  UserAttributes::~UserAttributes((UserAttributes *)(this + 0x60));
  pvVar2 = *(void **)(this + 0x48);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x50) = pvVar2;
    operator_delete(pvVar2);
  }
  Node::~Node((Node *)this);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



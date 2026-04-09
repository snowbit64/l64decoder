// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getHttpsRequestForCurrentThread
// Entry Point: 00c0651c
// Size: 568 bytes
// Signature: undefined getHttpsRequestForCurrentThread(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* KeyValueCacheClient::getHttpsRequestForCurrentThread() */

AndroidHTTPSRequest * KeyValueCacheClient::getHttpsRequestForCurrentThread(void)

{
  long **pplVar1;
  long in_x0;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  AndroidHTTPSRequest *this;
  long **pplVar6;
  long **pplVar7;
  long **pplVar8;
  long **pplVar9;
  
  Mutex::enterCriticalSection();
  plVar2 = (long *)ThreadUtil::getCurrentThreadId();
  pplVar7 = (long **)(in_x0 + 0x20);
  pplVar6 = pplVar7;
  pplVar9 = pplVar7;
  if ((long **)*pplVar7 != (long **)0x0) {
    pplVar6 = (long **)(in_x0 + 0x20);
    pplVar1 = (long **)*pplVar7;
    do {
      while (pplVar8 = pplVar1, pplVar9 = pplVar8, plVar2 < pplVar8[4]) {
        pplVar6 = pplVar8;
        pplVar1 = (long **)*pplVar8;
        if ((long **)*pplVar8 == (long **)0x0) {
          plVar5 = *pplVar8;
          goto joined_r0x00c065a4;
        }
      }
      if (plVar2 <= pplVar8[4]) break;
      pplVar6 = pplVar8 + 1;
      pplVar1 = (long **)*pplVar6;
    } while ((long **)*pplVar6 != (long **)0x0);
  }
  plVar5 = *pplVar6;
  pplVar8 = pplVar6;
joined_r0x00c065a4:
  if (plVar5 == (long *)0x0) {
    plVar3 = (long *)operator_new(0x30);
    plVar3[5] = 0;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[2] = (long)pplVar9;
    *pplVar8 = plVar3;
    plVar4 = *(long **)(in_x0 + 0x18);
    plVar3[4] = (long)plVar2;
    plVar5 = plVar3;
    if (*plVar4 != 0) {
      *(long *)(in_x0 + 0x18) = *plVar4;
      plVar5 = *pplVar8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(in_x0 + 0x20),(__tree_node_base *)plVar5);
    *(long *)(in_x0 + 0x28) = *(long *)(in_x0 + 0x28) + 1;
    this = (AndroidHTTPSRequest *)plVar3[5];
  }
  else {
    this = (AndroidHTTPSRequest *)plVar5[5];
  }
  if (this == (AndroidHTTPSRequest *)0x0) {
    this = (AndroidHTTPSRequest *)operator_new(0xa0);
                    /* try { // try from 00c06624 to 00c06627 has its CatchHandler @ 00c06754 */
    AndroidHTTPSRequest::AndroidHTTPSRequest(this);
    AndroidHTTPSRequest::init((char *)this,false,true);
    AndroidHTTPSRequest::addHeader(this,"cache-control","no-cache");
    AndroidHTTPSRequest::addHeader(this,"content-type","multipart/form-data");
    if ((long **)*pplVar7 == (long **)0x0) {
      plVar5 = *pplVar7;
      pplVar9 = pplVar7;
    }
    else {
      pplVar6 = (long **)*pplVar7;
      pplVar9 = (long **)(in_x0 + 0x20);
LAB_00c0668c:
      do {
        pplVar7 = pplVar6;
        if (pplVar7[4] <= plVar2) {
          if (pplVar7[4] < plVar2) {
            pplVar9 = pplVar7 + 1;
            pplVar6 = (long **)*pplVar9;
            if ((long **)*pplVar9 != (long **)0x0) goto LAB_00c0668c;
          }
          plVar5 = *pplVar9;
          goto joined_r0x00c066d8;
        }
        pplVar6 = (long **)*pplVar7;
        pplVar9 = pplVar7;
      } while ((long **)*pplVar7 != (long **)0x0);
      plVar5 = *pplVar7;
    }
joined_r0x00c066d8:
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)operator_new(0x30);
      plVar5[5] = 0;
      *plVar5 = 0;
      plVar5[1] = 0;
      plVar5[2] = (long)pplVar7;
      *pplVar9 = plVar5;
      plVar3 = *(long **)(in_x0 + 0x18);
      plVar5[4] = (long)plVar2;
      plVar2 = plVar5;
      if (*plVar3 != 0) {
        *(long *)(in_x0 + 0x18) = *plVar3;
        plVar2 = *pplVar9;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(in_x0 + 0x20),(__tree_node_base *)plVar2);
      *(long *)(in_x0 + 0x28) = *(long *)(in_x0 + 0x28) + 1;
    }
    plVar5[5] = (long)this;
  }
  Mutex::leaveCriticalSection();
  return this;
}



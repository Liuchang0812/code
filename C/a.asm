
a.out:     file format elf32-i386


Disassembly of section .init:

08048358 <_init>:
 8048358:	53                   	push   %ebx
 8048359:	83 ec 08             	sub    $0x8,%esp
 804835c:	e8 cf 00 00 00       	call   8048430 <__x86.get_pc_thunk.bx>
 8048361:	81 c3 9f 1c 00 00    	add    $0x1c9f,%ebx
 8048367:	8b 83 fc ff ff ff    	mov    -0x4(%ebx),%eax
 804836d:	85 c0                	test   %eax,%eax
 804836f:	74 05                	je     8048376 <_init+0x1e>
 8048371:	e8 3a 00 00 00       	call   80483b0 <__gmon_start__@plt>
 8048376:	83 c4 08             	add    $0x8,%esp
 8048379:	5b                   	pop    %ebx
 804837a:	c3                   	ret    

Disassembly of section .plt:

08048380 <printf@plt-0x10>:
 8048380:	ff 35 04 a0 04 08    	pushl  0x804a004
 8048386:	ff 25 08 a0 04 08    	jmp    *0x804a008
 804838c:	00 00                	add    %al,(%eax)
	...

08048390 <printf@plt>:
 8048390:	ff 25 0c a0 04 08    	jmp    *0x804a00c
 8048396:	68 00 00 00 00       	push   $0x0
 804839b:	e9 e0 ff ff ff       	jmp    8048380 <_init+0x28>

080483a0 <malloc@plt>:
 80483a0:	ff 25 10 a0 04 08    	jmp    *0x804a010
 80483a6:	68 08 00 00 00       	push   $0x8
 80483ab:	e9 d0 ff ff ff       	jmp    8048380 <_init+0x28>

080483b0 <__gmon_start__@plt>:
 80483b0:	ff 25 14 a0 04 08    	jmp    *0x804a014
 80483b6:	68 10 00 00 00       	push   $0x10
 80483bb:	e9 c0 ff ff ff       	jmp    8048380 <_init+0x28>

080483c0 <strlen@plt>:
 80483c0:	ff 25 18 a0 04 08    	jmp    *0x804a018
 80483c6:	68 18 00 00 00       	push   $0x18
 80483cb:	e9 b0 ff ff ff       	jmp    8048380 <_init+0x28>

080483d0 <__libc_start_main@plt>:
 80483d0:	ff 25 1c a0 04 08    	jmp    *0x804a01c
 80483d6:	68 20 00 00 00       	push   $0x20
 80483db:	e9 a0 ff ff ff       	jmp    8048380 <_init+0x28>

080483e0 <memset@plt>:
 80483e0:	ff 25 20 a0 04 08    	jmp    *0x804a020
 80483e6:	68 28 00 00 00       	push   $0x28
 80483eb:	e9 90 ff ff ff       	jmp    8048380 <_init+0x28>

080483f0 <__isoc99_scanf@plt>:
 80483f0:	ff 25 24 a0 04 08    	jmp    *0x804a024
 80483f6:	68 30 00 00 00       	push   $0x30
 80483fb:	e9 80 ff ff ff       	jmp    8048380 <_init+0x28>

Disassembly of section .text:

08048400 <_start>:
 8048400:	31 ed                	xor    %ebp,%ebp
 8048402:	5e                   	pop    %esi
 8048403:	89 e1                	mov    %esp,%ecx
 8048405:	83 e4 f0             	and    $0xfffffff0,%esp
 8048408:	50                   	push   %eax
 8048409:	54                   	push   %esp
 804840a:	52                   	push   %edx
 804840b:	68 30 87 04 08       	push   $0x8048730
 8048410:	68 c0 86 04 08       	push   $0x80486c0
 8048415:	51                   	push   %ecx
 8048416:	56                   	push   %esi
 8048417:	68 0c 85 04 08       	push   $0x804850c
 804841c:	e8 af ff ff ff       	call   80483d0 <__libc_start_main@plt>
 8048421:	f4                   	hlt    
 8048422:	66 90                	xchg   %ax,%ax
 8048424:	66 90                	xchg   %ax,%ax
 8048426:	66 90                	xchg   %ax,%ax
 8048428:	66 90                	xchg   %ax,%ax
 804842a:	66 90                	xchg   %ax,%ax
 804842c:	66 90                	xchg   %ax,%ax
 804842e:	66 90                	xchg   %ax,%ax

08048430 <__x86.get_pc_thunk.bx>:
 8048430:	8b 1c 24             	mov    (%esp),%ebx
 8048433:	c3                   	ret    
 8048434:	66 90                	xchg   %ax,%ax
 8048436:	66 90                	xchg   %ax,%ax
 8048438:	66 90                	xchg   %ax,%ax
 804843a:	66 90                	xchg   %ax,%ax
 804843c:	66 90                	xchg   %ax,%ax
 804843e:	66 90                	xchg   %ax,%ax

08048440 <deregister_tm_clones>:
 8048440:	b8 33 a0 04 08       	mov    $0x804a033,%eax
 8048445:	2d 30 a0 04 08       	sub    $0x804a030,%eax
 804844a:	83 f8 06             	cmp    $0x6,%eax
 804844d:	77 01                	ja     8048450 <deregister_tm_clones+0x10>
 804844f:	c3                   	ret    
 8048450:	b8 00 00 00 00       	mov    $0x0,%eax
 8048455:	85 c0                	test   %eax,%eax
 8048457:	74 f6                	je     804844f <deregister_tm_clones+0xf>
 8048459:	55                   	push   %ebp
 804845a:	89 e5                	mov    %esp,%ebp
 804845c:	83 ec 18             	sub    $0x18,%esp
 804845f:	c7 04 24 30 a0 04 08 	movl   $0x804a030,(%esp)
 8048466:	ff d0                	call   *%eax
 8048468:	c9                   	leave  
 8048469:	c3                   	ret    
 804846a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

08048470 <register_tm_clones>:
 8048470:	b8 30 a0 04 08       	mov    $0x804a030,%eax
 8048475:	2d 30 a0 04 08       	sub    $0x804a030,%eax
 804847a:	c1 f8 02             	sar    $0x2,%eax
 804847d:	89 c2                	mov    %eax,%edx
 804847f:	c1 ea 1f             	shr    $0x1f,%edx
 8048482:	01 d0                	add    %edx,%eax
 8048484:	d1 f8                	sar    %eax
 8048486:	75 01                	jne    8048489 <register_tm_clones+0x19>
 8048488:	c3                   	ret    
 8048489:	ba 00 00 00 00       	mov    $0x0,%edx
 804848e:	85 d2                	test   %edx,%edx
 8048490:	74 f6                	je     8048488 <register_tm_clones+0x18>
 8048492:	55                   	push   %ebp
 8048493:	89 e5                	mov    %esp,%ebp
 8048495:	83 ec 18             	sub    $0x18,%esp
 8048498:	89 44 24 04          	mov    %eax,0x4(%esp)
 804849c:	c7 04 24 30 a0 04 08 	movl   $0x804a030,(%esp)
 80484a3:	ff d2                	call   *%edx
 80484a5:	c9                   	leave  
 80484a6:	c3                   	ret    
 80484a7:	89 f6                	mov    %esi,%esi
 80484a9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

080484b0 <__do_global_dtors_aux>:
 80484b0:	80 3d 30 a0 04 08 00 	cmpb   $0x0,0x804a030
 80484b7:	75 13                	jne    80484cc <__do_global_dtors_aux+0x1c>
 80484b9:	55                   	push   %ebp
 80484ba:	89 e5                	mov    %esp,%ebp
 80484bc:	83 ec 08             	sub    $0x8,%esp
 80484bf:	e8 7c ff ff ff       	call   8048440 <deregister_tm_clones>
 80484c4:	c6 05 30 a0 04 08 01 	movb   $0x1,0x804a030
 80484cb:	c9                   	leave  
 80484cc:	f3 c3                	repz ret 
 80484ce:	66 90                	xchg   %ax,%ax

080484d0 <frame_dummy>:
 80484d0:	a1 10 9f 04 08       	mov    0x8049f10,%eax
 80484d5:	85 c0                	test   %eax,%eax
 80484d7:	74 1f                	je     80484f8 <frame_dummy+0x28>
 80484d9:	b8 00 00 00 00       	mov    $0x0,%eax
 80484de:	85 c0                	test   %eax,%eax
 80484e0:	74 16                	je     80484f8 <frame_dummy+0x28>
 80484e2:	55                   	push   %ebp
 80484e3:	89 e5                	mov    %esp,%ebp
 80484e5:	83 ec 18             	sub    $0x18,%esp
 80484e8:	c7 04 24 10 9f 04 08 	movl   $0x8049f10,(%esp)
 80484ef:	ff d0                	call   *%eax
 80484f1:	c9                   	leave  
 80484f2:	e9 79 ff ff ff       	jmp    8048470 <register_tm_clones>
 80484f7:	90                   	nop
 80484f8:	e9 73 ff ff ff       	jmp    8048470 <register_tm_clones>

080484fd <max>:
 80484fd:	55                   	push   %ebp
 80484fe:	89 e5                	mov    %esp,%ebp
 8048500:	8b 45 08             	mov    0x8(%ebp),%eax
 8048503:	39 45 0c             	cmp    %eax,0xc(%ebp)
 8048506:	0f 4d 45 0c          	cmovge 0xc(%ebp),%eax
 804850a:	5d                   	pop    %ebp
 804850b:	c3                   	ret    

0804850c <main>:
 804850c:	55                   	push   %ebp
 804850d:	89 e5                	mov    %esp,%ebp
 804850f:	83 e4 f0             	and    $0xfffffff0,%esp
 8048512:	81 ec 80 ac 00 00    	sub    $0xac80,%esp
 8048518:	c7 04 24 64 00 00 00 	movl   $0x64,(%esp)
 804851f:	e8 7c fe ff ff       	call   80483a0 <malloc@plt>
 8048524:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 8048528:	c7 04 24 64 00 00 00 	movl   $0x64,(%esp)
 804852f:	e8 6c fe ff ff       	call   80483a0 <malloc@plt>
 8048534:	89 44 24 30          	mov    %eax,0x30(%esp)
 8048538:	8b 44 24 30          	mov    0x30(%esp),%eax
 804853c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8048540:	8b 44 24 2c          	mov    0x2c(%esp),%eax
 8048544:	89 44 24 04          	mov    %eax,0x4(%esp)
 8048548:	c7 04 24 50 87 04 08 	movl   $0x8048750,(%esp)
 804854f:	e8 9c fe ff ff       	call   80483f0 <__isoc99_scanf@plt>
 8048554:	8b 44 24 2c          	mov    0x2c(%esp),%eax
 8048558:	89 04 24             	mov    %eax,(%esp)
 804855b:	e8 60 fe ff ff       	call   80483c0 <strlen@plt>
 8048560:	89 44 24 34          	mov    %eax,0x34(%esp)
 8048564:	8b 44 24 30          	mov    0x30(%esp),%eax
 8048568:	89 04 24             	mov    %eax,(%esp)
 804856b:	e8 50 fe ff ff       	call   80483c0 <strlen@plt>
 8048570:	89 44 24 38          	mov    %eax,0x38(%esp)
 8048574:	8b 44 24 38          	mov    0x38(%esp),%eax
 8048578:	89 44 24 10          	mov    %eax,0x10(%esp)
 804857c:	8b 44 24 30          	mov    0x30(%esp),%eax
 8048580:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8048584:	8b 44 24 34          	mov    0x34(%esp),%eax
 8048588:	89 44 24 08          	mov    %eax,0x8(%esp)
 804858c:	8b 44 24 2c          	mov    0x2c(%esp),%eax
 8048590:	89 44 24 04          	mov    %eax,0x4(%esp)
 8048594:	c7 04 24 56 87 04 08 	movl   $0x8048756,(%esp)
 804859b:	e8 f0 fd ff ff       	call   8048390 <printf@plt>
 80485a0:	c7 44 24 08 44 ac 00 	movl   $0xac44,0x8(%esp)
 80485a7:	00 
 80485a8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80485af:	00 
 80485b0:	8d 44 24 3c          	lea    0x3c(%esp),%eax
 80485b4:	89 04 24             	mov    %eax,(%esp)
 80485b7:	e8 24 fe ff ff       	call   80483e0 <memset@plt>
 80485bc:	c7 44 24 24 01 00 00 	movl   $0x1,0x24(%esp)
 80485c3:	00 
 80485c4:	e9 bb 00 00 00       	jmp    8048684 <main+0x178>
 80485c9:	c7 44 24 28 01 00 00 	movl   $0x1,0x28(%esp)
 80485d0:	00 
 80485d1:	e9 9b 00 00 00       	jmp    8048671 <main+0x165>
 80485d6:	8b 44 24 24          	mov    0x24(%esp),%eax
 80485da:	8d 50 ff             	lea    -0x1(%eax),%edx
 80485dd:	8b 44 24 2c          	mov    0x2c(%esp),%eax
 80485e1:	01 d0                	add    %edx,%eax
 80485e3:	0f b6 10             	movzbl (%eax),%edx
 80485e6:	8b 44 24 28          	mov    0x28(%esp),%eax
 80485ea:	8d 48 ff             	lea    -0x1(%eax),%ecx
 80485ed:	8b 44 24 30          	mov    0x30(%esp),%eax
 80485f1:	01 c8                	add    %ecx,%eax
 80485f3:	0f b6 00             	movzbl (%eax),%eax
 80485f6:	38 c2                	cmp    %al,%dl
 80485f8:	75 2d                	jne    8048627 <main+0x11b>
 80485fa:	8b 44 24 24          	mov    0x24(%esp),%eax
 80485fe:	8d 48 ff             	lea    -0x1(%eax),%ecx
 8048601:	8b 44 24 28          	mov    0x28(%esp),%eax
 8048605:	8d 50 ff             	lea    -0x1(%eax),%edx
 8048608:	6b c1 69             	imul   $0x69,%ecx,%eax
 804860b:	01 d0                	add    %edx,%eax
 804860d:	8b 44 84 3c          	mov    0x3c(%esp,%eax,4),%eax
 8048611:	8d 50 01             	lea    0x1(%eax),%edx
 8048614:	8b 44 24 24          	mov    0x24(%esp),%eax
 8048618:	6b c8 69             	imul   $0x69,%eax,%ecx
 804861b:	8b 44 24 28          	mov    0x28(%esp),%eax
 804861f:	01 c8                	add    %ecx,%eax
 8048621:	89 54 84 3c          	mov    %edx,0x3c(%esp,%eax,4)
 8048625:	eb 45                	jmp    804866c <main+0x160>
 8048627:	8b 44 24 28          	mov    0x28(%esp),%eax
 804862b:	8d 50 ff             	lea    -0x1(%eax),%edx
 804862e:	8b 44 24 24          	mov    0x24(%esp),%eax
 8048632:	6b c0 69             	imul   $0x69,%eax,%eax
 8048635:	01 d0                	add    %edx,%eax
 8048637:	8b 54 84 3c          	mov    0x3c(%esp,%eax,4),%edx
 804863b:	8b 44 24 24          	mov    0x24(%esp),%eax
 804863f:	83 e8 01             	sub    $0x1,%eax
 8048642:	6b c8 69             	imul   $0x69,%eax,%ecx
 8048645:	8b 44 24 28          	mov    0x28(%esp),%eax
 8048649:	01 c8                	add    %ecx,%eax
 804864b:	8b 44 84 3c          	mov    0x3c(%esp,%eax,4),%eax
 804864f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8048653:	89 04 24             	mov    %eax,(%esp)
 8048656:	e8 a2 fe ff ff       	call   80484fd <max>
 804865b:	8b 54 24 24          	mov    0x24(%esp),%edx
 804865f:	6b ca 69             	imul   $0x69,%edx,%ecx
 8048662:	8b 54 24 28          	mov    0x28(%esp),%edx
 8048666:	01 ca                	add    %ecx,%edx
 8048668:	89 44 94 3c          	mov    %eax,0x3c(%esp,%edx,4)
 804866c:	83 44 24 28 01       	addl   $0x1,0x28(%esp)
 8048671:	8b 44 24 28          	mov    0x28(%esp),%eax
 8048675:	3b 44 24 38          	cmp    0x38(%esp),%eax
 8048679:	0f 8e 57 ff ff ff    	jle    80485d6 <main+0xca>
 804867f:	83 44 24 24 01       	addl   $0x1,0x24(%esp)
 8048684:	8b 44 24 24          	mov    0x24(%esp),%eax
 8048688:	3b 44 24 34          	cmp    0x34(%esp),%eax
 804868c:	0f 8e 37 ff ff ff    	jle    80485c9 <main+0xbd>
 8048692:	8b 44 24 34          	mov    0x34(%esp),%eax
 8048696:	6b d0 69             	imul   $0x69,%eax,%edx
 8048699:	8b 44 24 38          	mov    0x38(%esp),%eax
 804869d:	01 d0                	add    %edx,%eax
 804869f:	8b 44 84 3c          	mov    0x3c(%esp,%eax,4),%eax
 80486a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 80486a7:	c7 04 24 68 87 04 08 	movl   $0x8048768,(%esp)
 80486ae:	e8 dd fc ff ff       	call   8048390 <printf@plt>
 80486b3:	b8 00 00 00 00       	mov    $0x0,%eax
 80486b8:	c9                   	leave  
 80486b9:	c3                   	ret    
 80486ba:	66 90                	xchg   %ax,%ax
 80486bc:	66 90                	xchg   %ax,%ax
 80486be:	66 90                	xchg   %ax,%ax

080486c0 <__libc_csu_init>:
 80486c0:	55                   	push   %ebp
 80486c1:	57                   	push   %edi
 80486c2:	31 ff                	xor    %edi,%edi
 80486c4:	56                   	push   %esi
 80486c5:	53                   	push   %ebx
 80486c6:	e8 65 fd ff ff       	call   8048430 <__x86.get_pc_thunk.bx>
 80486cb:	81 c3 35 19 00 00    	add    $0x1935,%ebx
 80486d1:	83 ec 1c             	sub    $0x1c,%esp
 80486d4:	8b 6c 24 30          	mov    0x30(%esp),%ebp
 80486d8:	8d b3 0c ff ff ff    	lea    -0xf4(%ebx),%esi
 80486de:	e8 75 fc ff ff       	call   8048358 <_init>
 80486e3:	8d 83 08 ff ff ff    	lea    -0xf8(%ebx),%eax
 80486e9:	29 c6                	sub    %eax,%esi
 80486eb:	c1 fe 02             	sar    $0x2,%esi
 80486ee:	85 f6                	test   %esi,%esi
 80486f0:	74 27                	je     8048719 <__libc_csu_init+0x59>
 80486f2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 80486f8:	8b 44 24 38          	mov    0x38(%esp),%eax
 80486fc:	89 2c 24             	mov    %ebp,(%esp)
 80486ff:	89 44 24 08          	mov    %eax,0x8(%esp)
 8048703:	8b 44 24 34          	mov    0x34(%esp),%eax
 8048707:	89 44 24 04          	mov    %eax,0x4(%esp)
 804870b:	ff 94 bb 08 ff ff ff 	call   *-0xf8(%ebx,%edi,4)
 8048712:	83 c7 01             	add    $0x1,%edi
 8048715:	39 f7                	cmp    %esi,%edi
 8048717:	75 df                	jne    80486f8 <__libc_csu_init+0x38>
 8048719:	83 c4 1c             	add    $0x1c,%esp
 804871c:	5b                   	pop    %ebx
 804871d:	5e                   	pop    %esi
 804871e:	5f                   	pop    %edi
 804871f:	5d                   	pop    %ebp
 8048720:	c3                   	ret    
 8048721:	eb 0d                	jmp    8048730 <__libc_csu_fini>
 8048723:	90                   	nop
 8048724:	90                   	nop
 8048725:	90                   	nop
 8048726:	90                   	nop
 8048727:	90                   	nop
 8048728:	90                   	nop
 8048729:	90                   	nop
 804872a:	90                   	nop
 804872b:	90                   	nop
 804872c:	90                   	nop
 804872d:	90                   	nop
 804872e:	90                   	nop
 804872f:	90                   	nop

08048730 <__libc_csu_fini>:
 8048730:	f3 c3                	repz ret 

Disassembly of section .fini:

08048734 <_fini>:
 8048734:	53                   	push   %ebx
 8048735:	83 ec 08             	sub    $0x8,%esp
 8048738:	e8 f3 fc ff ff       	call   8048430 <__x86.get_pc_thunk.bx>
 804873d:	81 c3 c3 18 00 00    	add    $0x18c3,%ebx
 8048743:	83 c4 08             	add    $0x8,%esp
 8048746:	5b                   	pop    %ebx
 8048747:	c3                   	ret    

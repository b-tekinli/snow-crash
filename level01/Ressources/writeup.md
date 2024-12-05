## Level01

Bu level özelinde de yine bir şeye bakmamıza izin vermiyor zaten bir önceki level'da ilk buraya bakmıştım ve dikkatimi flag01 çekmişti ama flag00 orada olmadığı için oraya yazmadım şimdi de oraya bakıyorum direkt yani `/etc/passwd` dosyasında flag01 kullanıcısını arıyorum. Şu komutla:

```bash
cat /etc/passwd | grep "flag01"
```

dosyanın içeriğini okuduğumda garip şifrelenmiş bir değer vardı.

![img1](./images/1.png)

Bu değerin hangi algoritmayla şifrelendiğini bulmak için [HashAnalyzer](https://www.tunnelsup.com/hash-analyzer/) sayfasında analiz ettim ve

![img2](./images/2.png)

DES algoritmasıyla şifrelenmiş olabileceğini gördüm. Bir önceki level üzerinde John The Ripper aracını görmüştük ve onun zaten DES hash'ini kırmak için optimize edildiğini biliyorum bu yüzden onu kullanacağız fakat burada bir şey kullanmamıza izin vermediği için ben de zaten kendi bilgisayarımda önceden kurmuş olduğum için orada kullanacağım.

![img3](./images/3.png)

Bu şekilde kendi bilgisayarımda john ile çalıştığımda gizli değere ulaştım.

![img4](./images/4.png)

Böylece artık level02'ye başarılı bir şekilde geçmiş olduk.

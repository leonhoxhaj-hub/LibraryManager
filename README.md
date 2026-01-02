# 📚 LibraryManager

## 📖 Përshkrimi i Projektit
**LibraryManager** është një aplikacion konsolë i zhvilluar në C++ për **menaxhimin e librave**.  
Ky projekt lejon përdoruesit të:
- Shtojnë libra 
- Shfaqin librat e regjistruar  
- Kërkojnë dhe fshijnë libra  
- Shikojnë informacion ose udhëzime për përdoruesin

Projekt i zhvilluar nga **4 studentë**, ku secili ka punuar në një pjesë të veçantë të funksionaliteteve.

---

👥 Ekipi
- Leon Hoxhaj: Shto librat (shto_liber.cpp)
- Studenti 2: Shfaq librat (shfaq_liber.cpp)
- Studenti 3: Kërko dhe fshi librat (kerko_fshi.cpp)
- Studenti 4: Dokumentacioni dhe udhëzimet (dokumentacion.cpp)

---

## ⚙️ Funksionet kryesore
1. **Shto libër** – Regjistron titullin dhe autorin e librit.  
2. **Shfaq librat** – Shfaq të gjithë librat e regjistruar.  
3. **Kërko/Fshi libër** – Kërkon dhe fshin librat.  
4. **Dokumentacion** – Shfaq informacione ose udhëzime për përdoruesin.

---

## 🗂️ Struktura e Projektit
```
LibraryManager/
│
├─ main.cpp # Skedari kryesor që thërret funksionet
├─ shto_liber.cpp # Funksionet për shtimin e librave
├─ shfaq_liber.cpp # Funksionet për shfaqjen e librave
├─ kerko_fshi.cpp # Funksionet për kërkim dhe fshirje
├─ dokumentacion.cpp # Funksionet për dokumentacion/udhëzime
├─ librat.txt # Skedari ku ruhen librat
└─ README.md # Ky dokument

```
---

## 🚀 Si të përdoret
1. Klono repository-n:
```bash
git clone https://github.com/username/LibraryManager.git

2. Kompilo programin:
g++ main.cpp shto_liber.cpp shfaq_liber.cpp kerko_fshi.cpp dokumentacion.cpp -o LibraryManager

3.Ekzekuto programin:

./LibraryManager
```

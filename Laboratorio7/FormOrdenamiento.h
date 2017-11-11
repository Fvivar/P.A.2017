#pragma once
#include <stack>
namespace Laboratorio7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Summary for FormOrdenamiento
	/// </summary>
	public ref class FormOrdenamiento : public System::Windows::Forms::Form
	{
	public:
		FormOrdenamiento(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormOrdenamiento()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::TextBox^  txtIngresoManual;
	private: System::Windows::Forms::Button^  btnIngresar;
	private: System::Windows::Forms::ListBox^  lstDesordenado;
	private: System::Windows::Forms::ListBox^  lstOrdenado;
	private: System::Windows::Forms::Button^  bubbleSort;

	private: System::Windows::Forms::Button^  quickSort;

	private: System::Windows::Forms::Button^  mergeSort;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtIngresoManual = (gcnew System::Windows::Forms::TextBox());
			this->btnIngresar = (gcnew System::Windows::Forms::Button());
			this->lstDesordenado = (gcnew System::Windows::Forms::ListBox());
			this->lstOrdenado = (gcnew System::Windows::Forms::ListBox());
			this->bubbleSort = (gcnew System::Windows::Forms::Button());
			this->quickSort = (gcnew System::Windows::Forms::Button());
			this->mergeSort = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 16);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Add number: ";
			// 
			// txtIngresoManual
			// 
			this->txtIngresoManual->Location = System::Drawing::Point(136, 16);
			this->txtIngresoManual->Margin = System::Windows::Forms::Padding(4);
			this->txtIngresoManual->Name = L"txtIngresoManual";
			this->txtIngresoManual->Size = System::Drawing::Size(132, 22);
			this->txtIngresoManual->TabIndex = 1;
			// 
			// btnIngresar
			// 
			this->btnIngresar->Location = System::Drawing::Point(296, 16);
			this->btnIngresar->Margin = System::Windows::Forms::Padding(4);
			this->btnIngresar->Name = L"btnIngresar";
			this->btnIngresar->Size = System::Drawing::Size(100, 28);
			this->btnIngresar->TabIndex = 2;
			this->btnIngresar->Text = L"Insert";
			this->btnIngresar->UseVisualStyleBackColor = true;
			this->btnIngresar->Click += gcnew System::EventHandler(this, &FormOrdenamiento::btnIngresar_Click);
			// 
			// lstDesordenado
			// 
			this->lstDesordenado->FormattingEnabled = true;
			this->lstDesordenado->ItemHeight = 16;
			this->lstDesordenado->Location = System::Drawing::Point(21, 160);
			this->lstDesordenado->Margin = System::Windows::Forms::Padding(4);
			this->lstDesordenado->Name = L"lstDesordenado";
			this->lstDesordenado->Size = System::Drawing::Size(131, 292);
			this->lstDesordenado->TabIndex = 3;
			this->lstDesordenado->SelectedIndexChanged += gcnew System::EventHandler(this, &FormOrdenamiento::lstDesordenado_SelectedIndexChanged);
			// 
			// lstOrdenado
			// 
			this->lstOrdenado->FormattingEnabled = true;
			this->lstOrdenado->ItemHeight = 16;
			this->lstOrdenado->Location = System::Drawing::Point(233, 160);
			this->lstOrdenado->Margin = System::Windows::Forms::Padding(4);
			this->lstOrdenado->Name = L"lstOrdenado";
			this->lstOrdenado->Size = System::Drawing::Size(131, 292);
			this->lstOrdenado->TabIndex = 4;
			// 
			// bubbleSort
			// 
			this->bubbleSort->Location = System::Drawing::Point(28, 95);
			this->bubbleSort->Margin = System::Windows::Forms::Padding(4);
			this->bubbleSort->Name = L"bubbleSort";
			this->bubbleSort->Size = System::Drawing::Size(100, 28);
			this->bubbleSort->TabIndex = 5;
			this->bubbleSort->Text = L"BubbleSort";
			this->bubbleSort->UseVisualStyleBackColor = true;
			this->bubbleSort->Click += gcnew System::EventHandler(this, &FormOrdenamiento::btnBurbuja_Click);
			// 
			// quickSort
			// 
			this->quickSort->Location = System::Drawing::Point(147, 95);
			this->quickSort->Margin = System::Windows::Forms::Padding(4);
			this->quickSort->Name = L"quickSort";
			this->quickSort->Size = System::Drawing::Size(100, 28);
			this->quickSort->TabIndex = 6;
			this->quickSort->Text = L"QuickSort";
			this->quickSort->UseVisualStyleBackColor = true;
			this->quickSort->Click += gcnew System::EventHandler(this, &FormOrdenamiento::button1_Click);
			// 
			// mergeSort
			// 
			this->mergeSort->Location = System::Drawing::Point(264, 95);
			this->mergeSort->Margin = System::Windows::Forms::Padding(4);
			this->mergeSort->Name = L"mergeSort";
			this->mergeSort->Size = System::Drawing::Size(100, 28);
			this->mergeSort->TabIndex = 7;
			this->mergeSort->Text = L"MergeSort";
			this->mergeSort->UseVisualStyleBackColor = true;
			this->mergeSort->Click += gcnew System::EventHandler(this, &FormOrdenamiento::mergeSort_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 139);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 17);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Unsorted values";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(252, 139);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 17);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Sorted values";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(296, 59);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Reset";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormOrdenamiento::button1_Click_1);
			// 
			// FormOrdenamiento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(412, 486);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->mergeSort);
			this->Controls->Add(this->quickSort);
			this->Controls->Add(this->bubbleSort);
			this->Controls->Add(this->lstOrdenado);
			this->Controls->Add(this->lstDesordenado);
			this->Controls->Add(this->btnIngresar);
			this->Controls->Add(this->txtIngresoManual);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"FormOrdenamiento";
			this->Text = L"FormOrdenamiento";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
				
#pragma endregion
	
		Stack^ myStack = gcnew Stack();
	private: System::Void btnIngresar_Click(System::Object^  sender, System::EventArgs^  e) {
		//Pushing number to stack (myStack)
		myStack->Push(txtIngresoManual->Text);
		//Adding number to listBox
		lstDesordenado->Items->Add(txtIngresoManual->Text);
		txtIngresoManual->Clear();
		txtIngresoManual->Focus();
	}

private: System::Void btnBurbuja_Click(System::Object^  sender, System::EventArgs^  e) {
	
	//Adding bubble sort 
	//Adding numbers to array
	int* data = new int[lstDesordenado->Items->Count];
	int z = 0;
	int zi = 0;
	IEnumerator^ myEnum = myStack->GetEnumerator();
	while (myEnum->MoveNext())
	{
		Object^ obj = safe_cast<Object^>(myEnum->Current);

		zi = int::Parse(obj->ToString());
		data[z] = zi;
		z++;
	}
	//
	int temp = 0;
	
	for (int i = 0; i < (lstDesordenado->Items->Count)-1; i++)
	{
		for (int j = i; j < (lstDesordenado->Items->Count); j++)
		{
			if (data[i]>data[j])
			{
				temp = data[j];
				data[j] = data[i];
				data[i] = temp;
			}
		}
	}
	//Ending bubble sort

	//Adding sorted files to listBox
	for (int k = 0; k < lstDesordenado->Items->Count; k++)
	{
		lstOrdenado->Items->Add(data[k]);
	}
	//
	

	MessageBox::Show("Files sorted", "BubbleSort", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

private: System::Void lstDesordenado_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	//Adding QuickSort
	int* data = new int[lstDesordenado->Items->Count];
	int c = lstDesordenado->Items->Count;
	int z = 0;
	int zi = 0;
	IEnumerator^ myEnum = myStack->GetEnumerator();
	while (myEnum->MoveNext())
	{
		Object^ obj = safe_cast<Object^>(myEnum->Current);

		zi = int::Parse(obj->ToString());
		data[z] = zi;
		z++;
	}
	quicksort(data, 0, c-1);
	//Ending QuickSort
	//Adding sorted files to listBox
	for (int k = 0; k < lstDesordenado->Items->Count; k++)
	{
		lstOrdenado->Items->Add(data[k]);
	}
	//
	MessageBox::Show("Files sorted", "QuickSort", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
 public: System::Void quicksort(int d[], int inf, int sup)
		 {
			 int i = inf - 1;
			 int j = sup;
			 bool check = true;
			 int aux = 0;

			 if (inf >= sup)
			 {
				 return;
			 }
			 int piv = d[sup];
			 while (check)
			 {
				 while (d[++i] < piv);
				 while ((d[--j]> piv) && (j > inf));
				 
				 if (i<j)
				 {
					 aux = d[i];
					 d[i] = d[j];
					 d[j] = aux;
				 }
				 else
				 {
					 check = false;
				 }
			 }
			 aux = d[i];
			 d[i] = d[sup];
			 d[sup] = aux;
			 quicksort(d, inf, i - 1);
			 quicksort(d, i + 1, sup);
		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	lstDesordenado->Items->Clear();
	lstOrdenado->Items->Clear();
	myStack->Clear();
}
private: System::Void mergeSort_Click(System::Object^  sender, System::EventArgs^  e) {
	//Adding QuickSort
	int* data = new int[lstDesordenado->Items->Count];
	int c = lstDesordenado->Items->Count;
	int z = 0;
	int zi = 0;
	IEnumerator^ myEnum = myStack->GetEnumerator();
	while (myEnum->MoveNext())
	{
		Object^ obj = safe_cast<Object^>(myEnum->Current);

		zi = int::Parse(obj->ToString());
		data[z] = zi;
		z++;
	}
	mergesort(data, 0, c);
	//Ending QuickSort
	//Adding sorted files to listBox
	for (int k = 0; k < lstDesordenado->Items->Count; k++)
	{
		lstOrdenado->Items->Add(data[k]);
	}
	//
	MessageBox::Show("Files sorted", "MergeSort", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
public: System::Void mergesort(int d[], int ini, int n)
{
	int n1;
	int n2;
	if (n>1)
	{
		n1 = n / 2;
		n2 = n - n1;
		mergesort(d, ini, n1);
		mergesort(d, ini + n1, n2);
		merge(d, ini, n1, n2, n);
	}
}
		public: System::Void merge(int d[], int ini, int n1, int n2, int n)
		{
			int* auxData = new int[n];
			for (int i = 0; i < n; i++)
			{
				auxData[i] = 0;
			}
			
			int aux = 0;
			int aux1 = 0;
			int aux2 = 0;

			while ((aux1<n1)&&(aux2<n2))
			{
				if (d[ini+aux1]<d[ini+n1+aux2])
				{
					auxData[aux++] = d[ini + (aux1++)];
				}
				else
				{
					auxData[aux++] = d[ini +n1+ (aux2++)];
				}
			}
			while (aux1<n1)
			{
				auxData[aux++] = d[ini + (aux1++)];
			}
			while (aux2<n2)
			{
				auxData[aux++] = d[ini + n1+(aux2++)];
			}

			for (int i = 0; i < n1+n2; i++)
			{
				d[ini + i] = auxData[i];
			}
		}
};
}
